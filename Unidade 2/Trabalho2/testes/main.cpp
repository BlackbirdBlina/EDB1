#include <iostream>
#include <vector>
#include "selectionSort.hpp"
#include "quickSort.hpp"
#include "mergeSort.hpp"
#include "insertionSort.hpp"
#include "bubbleSort.hpp"
using namespace std;

// Atenção à arquitetura da máquina - indicar um tamanho que a máquina suporta (requer uso especial de memória)
int validaTamanho(int a, string frase){
    while(a < 1){
        cout << frase << endl;
        cin >> a;
    }
    return a;
}

int verificaVar(int a, string frase){
    while(a < 1 || a > 3){
        cout << frase << endl;
        cin >> a;
    }
    return a;
}

void escolheDistribuicaoDados(vector<int> &v, int tipoDistribuicao, int tamanho){
    switch (tipoDistribuicao)
    {
    case 1:
        srand(static_cast<unsigned int>(time(nullptr)));
        for (int i = 0; i < tamanho; i++){
            v.push_back(rand());
        }
        break;

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

    case 3:
        for (int i = 0; i < tamanho; ++i){
            v.push_back(tamanho - i);
        }
        break;

    default:
        break;
    }
}

void copiaVetor(vector<int> a, vector<int> b){
    // Limpa o vetor para cada chamada da função
    b.clear();
    for (int i = 0; i < a.size(); i++){
        // Preenche o vetor
        b.push_back(a[i]);
    }
}

int main (){
    int temp;
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

    cout << "Para escolher o tipo de dados gerados, escolha: 1 para ALEATÓRIO; 2 para QUASE ORDENADOS; 3 para INVERSAMENTE ORDENADOS" << endl;
    cin >> tipoDistribuicao;
    cin.ignore();
    tipoDistribuicao = verificaVar(tipoDistribuicao, "Por favor digite 1 para ALEATÓRIO ou 2 para QUASE ORDENADOS ou 3 para INVERSAMENTE ORDENADOS.");
    escolheDistribuicaoDados(vetor, tipoDistribuicao, tamanho);

    copiaVetor(vetor, vetorAux);
    selectionSort(vetorAux, tamanho);

    copiaVetor(vetor, vetorAux);
    quickSort(vetorAux, 0, tamanho - 1);

    copiaVetor(vetor, vetorAux);
    mergeSort(vetorAux, 0, tamanho - 1);

    copiaVetor(vetor, vetorAux);
    insertionSort(vetorAux, tamanho);

    copiaVetor(vetor, vetorAux);
    bubbleSort(vetorAux, tamanho);
    return 0;
}
