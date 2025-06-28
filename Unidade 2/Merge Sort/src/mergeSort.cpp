#include <vector>
#include "mergeSort.hpp"
using namespace std;

void mergeInc(vector<int> &v, int inicioV1, int inicioV2, int finalV2){
    int finalV1 = inicioV2 - 1;
    // Variável criada para percorrer e preencher o vetor v após ordenação
    int start1 = inicioV1;
    int control = 0;
    int tempSize = finalV2 - inicioV1 + 1;
    vector<int> temp(tempSize);

    while (inicioV1 <= finalV1 && inicioV2 <= finalV2){
        if (v[inicioV1] <= v[inicioV2]){
            temp[control] = v[inicioV1];
            ++inicioV1;
        } else {
            temp[control] = v[inicioV2];
            ++inicioV2;
        }
        ++control;
    }

    // Para metades irregulares
    while (inicioV1 <= finalV1){
        temp[control] = v[inicioV1];
        ++inicioV1;
        ++control;
    }

    while (inicioV2 <= finalV2){
        temp[control] = v[inicioV2];
        ++inicioV2;
        ++control;
    }

    // Preenchendo o vetor v com os valores ordenados
    for(int i = 0; i < tempSize; ++i){
        v[i + start1] = temp[i];
    }
}

void mergeDec(vector<int> &v, int inicioV1, int inicioV2, int finalV2){
    int finalV1 = inicioV2 - 1;
    // Variável criada para percorrer e preencher o vetor v após ordenação
    int start1 = inicioV1;
    int control = 0;
    int tempSize = finalV2 - inicioV1 + 1;
    vector<int> temp(tempSize);

    while (inicioV1 <= finalV1 && inicioV2 <= finalV2){
        if (v[inicioV1] >= v[inicioV2]){
            temp[control] = v[inicioV1];
            ++inicioV1;
        } else {
            temp[control] = v[inicioV2];
            ++inicioV2;
        }
        ++control;
    }

    // Para metades irregulares
    while (inicioV1 <= finalV1){
        temp[control] = v[inicioV1];
        ++inicioV1;
        ++control;
    }

    while (inicioV2 <= finalV2){
        temp[control] = v[inicioV2];
        ++inicioV2;
        ++control;
    }

    // Preenchendo o vetor v com os valores ordenados
    for(int i = 0; i < tempSize; ++i){
        v[i + start1] = temp[i];
    }

}

void mergeSortInc(vector<int> &v, int tamanho){

}

void mergeSortDec(vector<int> &v, int tamanho){

}

void mergeSortIncRec(vector<int> &v, int left, int right){
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Chamadas recursivas das metades (esquerda e direita)
        mergeSortIncRec(v, left, mid);
        mergeSortIncRec(v, mid + 1, right);

        // Chamando a função para juntar (mergear) as metades ordenadas e ordena
        mergeInc(v, left, mid + 1, right);
    }

}

void mergeSortDecRec(vector<int> &v, int left, int right){
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Chamadas recursivas das metades (esquerda e direita)
        mergeSortDecRec(v, left, mid);
        mergeSortDecRec(v, mid + 1, right);

        // Chamando a função para juntar (mergear) as metades ordenadas e ordena
        mergeDec(v, left, mid + 1, right);
    }
}
