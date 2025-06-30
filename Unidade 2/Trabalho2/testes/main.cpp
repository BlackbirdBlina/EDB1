#include <iostream>
#include <vector>
#include <ctime>
#include <chrono>
#include <iomanip>
#include <functional>

#include "selectionSort.hpp"
#include "quickSort.hpp"
#include "mergeSort.hpp"
#include "insertionSort.hpp"
#include "bubbleSort.hpp"


using namespace std;
using namespace std::chrono;


// Atenção à arquitetura da máquina - indicar um tamanho que a máquina suporta (requer uso especial de memória)
int validaTamanho(int a, string frase){
    while(a < 1){
        cout << frase << endl;
        cin >> a;
    }
    return a;
}

// Filtro para evitar a entrada de valores além de 1, 2 e 3 para o switch case
int capturaVerificaValor(int a, string frase){
    while (true) {
        std::cout << frase << endl;
        std::cin  >> a;

        if (std::cin.fail()) {
            std::cout << "Entrada inválida! Digite um número." << endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max());
            continue;
        }

        if (a < 1 || a > 3) {
            std::cout << "Valor inválido! Por favor digite 1 para ALEATÓRIO ou 2 para QUASE ORDENADOS ou 3 para INVERSAMENTE ORDENADOS." << endl;
            continue;
        }
        break;
    }
    return a;
}

void escolheDistribuicaoDados(vector<int> &v, int tipoDistribuicao, int tamanho){
    switch (tipoDistribuicao)
    {

    //ALEATÓRIOS
    case 1:
        srand(static_cast<unsigned int>(time(nullptr)));
        for (int i = 0; i < tamanho; i++){
            v.push_back(rand());
        }
        break;

    // QUASE ORDENADOS - 10% "bagunçado"
    case 2:
        srand(static_cast<unsigned int>(time(nullptr)));
        for (int i = 0; i < tamanho; ++i){
            v.push_back(i);
        }
        for (int i = tamanho - 1; i > tamanho - (tamanho/10); --i){
            int j = rand() % tamanho;
            int aux = v[i];
            v[i] = v[j];
            v[j] = aux;
        }
        break;

    // INVERSAMENTE ORDENADOS
    case 3:
        for (int i = 0; i < tamanho; ++i){
            v.push_back(tamanho - i);
        }
        break;

    default:
        break;
    }
}

void copiaVetor(vector<int> &a, vector<int> &b){
    // Limpa o vetor para cada chamada da função
    b.clear();
    for (size_t i = 0; i < a.size(); i++){
        // Preenche o vetor
        b.push_back(a[i]);
    }
}

// Calcula o time das ordenações naturalmente iterativas
void timeSortIter(function<void(vector<int> &, int)> func, vector<int> &v, int tamanho, string frase){
    high_resolution_clock::time_point start;
    duration<double> duracao;

    start = high_resolution_clock::now();

    func(v, tamanho);

    duracao = duration_cast<duration<double>>(high_resolution_clock::now() - start);
    cout << "O " << frase << " demorou " << fixed << setprecision(10) << duracao.count() << endl;
}

// Calcula o time das ordenações naturalmente recursivas
void timeSortRec(function<void(vector<int> &, int, int)> func, vector<int> &v, int a, int b, string frase){
    high_resolution_clock::time_point start;
    duration<double> duracao;

    start = high_resolution_clock::now();

    func(v, a, b);

    duracao = duration_cast<duration<double>>(high_resolution_clock::now() - start);
    cout << "O " << frase << " demorou: " << fixed << setprecision(10) << duracao.count() << " segundo(s)." << endl;
}


int main (){
    int tamanho;
    int tipoDistribuicao = 0;
    vector<int> vetor;
    vector<int> vetorAux;

    cout << "Digite um número inteiro para o tamanho para o vetor: " << endl;
    cin >> tamanho;
    cin.ignore();
    tamanho = validaTamanho(tamanho, "Por favor digite um número maior que 0");
    // O tipo Vector aloca memória dinamicamente - otimizado
    vetor.reserve(tamanho);
    vetorAux.reserve(tamanho);

    tipoDistribuicao = capturaVerificaValor(tipoDistribuicao, "Para escolher o tipo de dados gerados, escolha: 1 para ALEATÓRIO; 2 para QUASE ORDENADOS; 3 para INVERSAMENTE ORDENADOS.");

    escolheDistribuicaoDados(vetor, tipoDistribuicao, tamanho);

    copiaVetor(vetor, vetorAux);
    timeSortIter(selectionSort, vetorAux, tamanho, "Selection Sort");

    copiaVetor(vetor, vetorAux);
    timeSortIter(insertionSort, vetorAux, tamanho, "Insertion Sort");

    copiaVetor(vetor, vetorAux);
    timeSortIter(bubbleSort, vetorAux, tamanho, "Bubble Sort");

    copiaVetor(vetor, vetorAux);
    timeSortRec(quickSort, vetorAux, 0, tamanho - 1, "Quick Sort");

    copiaVetor(vetor, vetorAux);
    timeSortRec(mergeSort, vetorAux, 0, tamanho - 1, "Merge Sort");

    return 0;
}
