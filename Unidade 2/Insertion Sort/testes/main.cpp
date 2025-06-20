#include <iostream>
#include <vector>
#include "insertionSort.hpp"
using namespace std;

// Caso queira tamanho irrestrito: retirar ou (||) *Altere frase para se adequar ao contexto escolhido
int validaTamanho(int a, string frase){
    while(a < 1 || a > 100){
        cout << frase << endl;
        cin >> a;
    }
    return a;
}

int verificaVar(int a, string frase){
    while(a < 1 || a > 2){
        cout << frase << endl;
        cin >> a;
    }
    return a;
}

void escolheFuncInter(vector<int> &v, int b, int t){
    switch (b)
    {
    case 1:
        insertionSortInc(v, t);
        break;

    case 2:
        insertionSortDec(v, t);
        break;

    default:
        break;
    }
}

void escolheFuncRec(vector<int> &v, int c, int t){
    switch (c)
    {
    case 1:
        // 1 determina o tamanho do vetor inicial (imaginário)
        insertionSortIncRec(v, 1, t);
        break;

    case 2:
        insertionSortDecRec(v, 1, t);
        break;

    default:
        break;
    }
}

int main (){
    int temp;
    int tamanho;
    int tipoAlgorit = 0;
    int tipoOrdem = 0;
    vector<int> vetor;

    cout << "Digite um número inteiro para o tamanho para o vetor: " << endl;
    cin >> tamanho;
    cin.ignore();
    tamanho = validaTamanho(tamanho, "Por favor digite um número maior que 0 e menor que 100.");
    // O tipo Vector aloca memória dinamicamente - otimizado
    vetor.reserve(tamanho);
    cout << "Digite " << tamanho << " número(s) para preencher o vetor: " << endl;

    for (int i = 0; i < tamanho; i++){
        cin >> temp;
        cin.ignore();
        vetor.push_back(temp);
    }

    cout << "Caso queira usar iteração para ordenar digite 1, para usar recursão digite 2:" << endl;
    cin >> tipoAlgorit;
    cin.ignore();
    tipoAlgorit = verificaVar(tipoAlgorit, "Por favor digite 1 para iteração ou 2 para recursão.");
    cout << "Qual tipo de ordenamento deseja fazer? Digite 1 para crescente ou 2 para decrescente." << endl;
    cin >> tipoOrdem;
    cin.ignore();
    tipoOrdem = verificaVar(tipoOrdem, "Por favor digite 1 para ordenar de forma crescente ou 2 para ordenar de forma decrescente.");

    if (tipoAlgorit == 1){
        escolheFuncInter(vetor, tipoOrdem, tamanho);
    } else {
        escolheFuncRec(vetor, tipoOrdem, tamanho);
    }

    for (int i = 0; i < tamanho; i++){
        cout << vetor[i] << endl;
    }

    return 0;
}
