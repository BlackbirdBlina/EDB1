#include <vector>
#include "mergeSort.hpp"
using namespace std;

void merge(vector<int> &v, int inicioV1, int inicioV2, int finalV2){
    int finalV1 = inicioV2 - 1;
    // Variável criada para percorrer e preencher o vetor v após ordenação
    int start1 = inicioV1;
    int control = 0;
    int tempSize = finalV2 - inicioV1 + 1;
    vector<int> temp(tempSize);

    while (inicioV1 <= finalV1 && inicioV2 <= finalV2){
        // Caso queira ordenar de forma decrescente altere a condição do if para ">="
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

void mergeSort(vector<int> &v, int left, int right){
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Chamadas recursivas das metades (esquerda e direita)
        mergeSort(v, left, mid);
        mergeSort(v, mid + 1, right);

        // Chamando a função para juntar (mergear) as metades ordenadas e ordena
        merge(v, left, mid + 1, right);
    }

}
