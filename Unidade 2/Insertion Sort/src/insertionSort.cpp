#include <vector>
#include "insertionSort.hpp"
using namespace std;

void insertionSortInc(vector<int> &v, int tamanho){
    for (int elemento_n_ordenado = 1; elemento_n_ordenado < tamanho; ++elemento_n_ordenado){
        int aux = v[elemento_n_ordenado];
        int elemento_ordenado = elemento_n_ordenado - 1;

        while (elemento_ordenado >= 0 && v[elemento_ordenado] > aux){
            v[elemento_ordenado + 1] = v[elemento_ordenado];
            elemento_ordenado -= 1;
        }
        v[elemento_ordenado + 1] = aux;
    }
}

void insertionSortDec(vector<int> &v, int tamanho){
    for (int elemento_n_ordenado = 1; elemento_n_ordenado < tamanho; ++elemento_n_ordenado){
        int aux = v[elemento_n_ordenado];
        int elemento_ordenado = elemento_n_ordenado - 1;

        while (elemento_ordenado >= 0 && v[elemento_ordenado] < aux){
            v[elemento_ordenado + 1] = v[elemento_ordenado];
            elemento_ordenado -= 1;
        }
        v[elemento_ordenado + 1] = aux;
    }

}

void insertionSortIncRec(vector<int> &v, int tamanho_atual, int tamanho_real){
    if (tamanho_atual == tamanho_real){
        return;
    }
    int elemento_n_ordenado = tamanho_atual;
    int aux = v[elemento_n_ordenado];
    int elemento_ordenado = elemento_n_ordenado - 1;

    while (elemento_ordenado >= 0 && v[elemento_ordenado] > aux){
        v[elemento_ordenado + 1] = v[elemento_ordenado];
        elemento_ordenado -= 1;
    }
    v[elemento_ordenado + 1] = aux;

    // Ao chamar novamente a função os argumentos passados estão atualizados *tamanho real não muda
    insertionSortIncRec(v, tamanho_atual + 1, tamanho_real);

}

void insertionSortDecRec(vector<int> &v, int tamanho_atual, int tamanho_real){
    if (tamanho_atual == tamanho_real){
        return;
    }
    int elemento_n_ordenado = tamanho_atual;
    int aux = v[elemento_n_ordenado];
    int elemento_ordenado = elemento_n_ordenado - 1;

    while (elemento_ordenado >= 0 && v[elemento_ordenado] < aux){
        v[elemento_ordenado + 1] = v[elemento_ordenado];
        elemento_ordenado -= 1;
    }
    v[elemento_ordenado + 1] = aux;

    // Ao chamar novamente a função os argumentos passados estão atualizados *tamanho real não muda
    insertionSortDecRec(v, tamanho_atual + 1, tamanho_real);
}
