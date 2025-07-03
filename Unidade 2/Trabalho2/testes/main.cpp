#include <iostream>
#include <vector>
#include <ctime>
#include <chrono>
#include <iomanip>
#include <functional>
#include <algorithm>

#include "selectionSortMetrics.hpp"
#include "quickSortMetrics.hpp"
#include "mergeSortMetrics.hpp"
#include "insertionSortMetrics.hpp"
#include "bubbleSortMetrics.hpp"
#include "qtdComparTroca.hpp"

using namespace std;
using namespace std::chrono;

// Verifica cada caractere passado
bool isInteger(const string &s){
    if (s.empty()){
        return false;
    }

    size_t start = (s[0] == '-' || s[0] == '+') ? 1 : 0;
    if (start == s.size()){
        return false;
    }

    for (size_t i = start; i < s.size(); ++i){
        if (!isdigit(s[i])){
            return false;
        }
    }
    return true;
}

// Atenção à arquitetura da máquina - indicar um tamanho que a máquina suporta (requer uso especial de memória)
int validaTamanho(int a, string frase){
    cout << frase << endl;
    string line;

    while (true) {
        // Lendo toda a linha - verifica tudo o que foi passado
        getline(cin, line);
        if (!isInteger(line)) {
            cout << "Entrada inválida! Digite um número inteiro." << endl;
            continue;
        }

        // Transforma a string como um "buffer de leitura", como um cin
        stringstream ss(line);
        ss >> a;

        if (a < 1) {
            cout << "Por favor digite um número inteiro maior que 0:" << endl;
            continue;
        }
        break;
    }
    return a;
}

// Filtro para evitar a entrada de valores além de 1, 2 e 3 para o switch case
int capturaVerificaValor(int a, string frase){
    cout << frase << endl;
    string line;

    while (true) {
        getline(cin, line);
        if (!isInteger(line)) {
            cout << "Entrada inválida! Digite um número inteiro." << endl;
            continue;
        }

        stringstream ss(line);
        ss >> a;

        if (a < 1 || a > 3) {
            cout << "Valor inválido! Por favor digite 1 para ALEATÓRIO ou 2 para QUASE ORDENADOS ou 3 para INVERSAMENTE ORDENADOS." << endl;
            continue;
        }
        break;
    }
    return a;
}

void escolheDistribuicaoDados(vector<TipoAlvo> &v, int tipoDistribuicao, int tamanho){
    switch (tipoDistribuicao)
    {

    //ALEATÓRIOS
    case 1:
        srand(static_cast<unsigned int>(time(nullptr)));
        for (int i = 0; i < tamanho; i++){
            v.push_back((TipoAlvo)rand());
        }
        break;

    // QUASE ORDENADOS - 10% "bagunçado"
    case 2:
        srand(static_cast<unsigned int>(time(nullptr)));
        for (int i = 0; i < tamanho; ++i){
            v.push_back((TipoAlvo)i);
        }
        for (int i = tamanho - 1; i > tamanho - (tamanho/10); --i){
            int j = rand() % tamanho;
            TipoAlvo aux = v[i];
            v[i] = v[j];
            v[j] = aux;
        }
        break;

    // INVERSAMENTE ORDENADOS
    case 3:
        for (int i = 0; i < tamanho; ++i){
            v.push_back((TipoAlvo)tamanho - i);
        }
        break;

    default:
        break;
    }
}

void copiaVetor(vector<TipoAlvo> &a, vector<TipoAlvo> &b){
    // Limpa o vetor para cada chamada da função
    b.clear();
    for (size_t i = 0; i < a.size(); i++){
        // Preenche o vetor
        b.push_back(a[i]);
    }
}

// Calcula o time das ordenações naturalmente iterativas
void timeSortIter(function<ContaComparEtrocas(vector<TipoAlvo> &, int)> func, vector<TipoAlvo> &v, int tamanho, string frase){
    high_resolution_clock::time_point start;
    duration<double> duracao;

    start = high_resolution_clock::now();

    ContaComparEtrocas contagem = func(v, tamanho);

    duracao = duration_cast<duration<double>>(high_resolution_clock::now() - start);
    cout << "O " << frase << " demorou: " << fixed << setprecision(10) << duracao.count() << " segundo(s), ";
    cout << "fazendo " << contagem.qtdComparacoes << " comparações e ";
    cout << contagem.qtdTrocas << " trocas." << endl;
}

// Calcula o time das ordenações naturalmente recursivas
void timeSortRec(function<ContaComparEtrocas(vector<TipoAlvo> &, int, int)> func, vector<TipoAlvo> &v, int a, int b, string frase){
    high_resolution_clock::time_point start;
    duration<double> duracao;

    start = high_resolution_clock::now();

    ContaComparEtrocas contagem = func(v, a, b);

    duracao = duration_cast<duration<double>>(high_resolution_clock::now() - start);
    cout << "O " << frase << " demorou: " << fixed << setprecision(10) << duracao.count() << " segundo(s), ";
    cout << "fazendo " << contagem.qtdComparacoes << " comparações e ";
    cout << contagem.qtdTrocas << " trocas." << endl;
}


int main (){

    int tamanho = 0;
    int tipoDistribuicao = 0;
    vector<TipoAlvo> vetor;
    vector<TipoAlvo> vetorAux;

    tamanho = validaTamanho(tamanho, "Digite um número inteiro para o tamanho do vetor: ");
    // O tipo Vector aloca memória dinamicamente - otimizado
    vetor.reserve(tamanho);
    vetorAux.reserve(tamanho);

    tipoDistribuicao = capturaVerificaValor(tipoDistribuicao, "Para escolher o tipo de dados gerados, escolha: 1 para ALEATÓRIO; 2 para QUASE ORDENADOS; 3 para INVERSAMENTE ORDENADOS.");

    escolheDistribuicaoDados(vetor, tipoDistribuicao, tamanho);

    copiaVetor(vetor, vetorAux);
    timeSortIter(selectionSortMetrics, vetorAux, tamanho, "Selection Sort");

    copiaVetor(vetor, vetorAux);
    timeSortIter(insertionSortMetrics, vetorAux, tamanho, "Insertion Sort");

    copiaVetor(vetor, vetorAux);
    timeSortIter(bubbleSortMetrics, vetorAux, tamanho, "Bubble Sort");

    copiaVetor(vetor, vetorAux);
    timeSortRec(quickSortMetrics, vetorAux, 0, tamanho - 1, "Quick Sort");

    copiaVetor(vetor, vetorAux);
    timeSortRec(mergeSortMetrics, vetorAux, 0, tamanho - 1, "Merge Sort");

    copiaVetor(vetor, vetorAux);

    // Extra - adicionando medição de tempo do algoritmo de ordenação padrão do C++
    high_resolution_clock::time_point start;
    duration<double> duracao;

    start = high_resolution_clock::now();

    std::sort(vetorAux.begin(), vetorAux.end());

    duracao = duration_cast<duration<double>>(high_resolution_clock::now() - start);
    cout << "O sort STL demorou: " << fixed << setprecision(10) << duracao.count() << " segundo(s)" << endl;


    return 0;
}
