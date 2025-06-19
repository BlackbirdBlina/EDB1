#include <vector>
#include "selectionSort.hpp"
using namespace std;

void selectionSortInc(vector<int> &v, int tamanho){
    for (int i = 0; i < tamanho - 1; ++i) {
        int min = i;
        for (int j = i + 1 ; j < tamanho; ++j){
            if (v[j] < v[min]){
                min = j;
            }
        }
        int x = v[i];
        v[i] = v[min];
        v[min] = x;
    }
}

void selectionSortDec(vector<int> &v, int tamanho){
    for (int i = 0; i < tamanho - 1; ++i) {
        int max = i;
        for (int j = i + 1 ; j < tamanho; ++j){
            if (v[j] > v[max]){
                max = j;
            }
        }
        int x = v[i];
        v[i] = v[max];
        v[max] = x;
    }
}

void selectionSortIncRec(vector<int> &v, int inicio, int final){
    if (inicio == final){
        return;
    }
    int min = inicio;
    for (int j = inicio + 1 ; j < final; ++j){
        if (v[j] < v[min]){
            min = j;
        }
    }
    int aux = v[inicio];
    v[inicio] = v[min];
    v[min] = aux;
    selectionSortIncRec(v, inicio + 1, final);
}


void selectionSortDecRec(vector<int> &v, int inicio, int final){
    if (inicio == final){
        return;
    }
    int max = inicio;
    for (int j = inicio + 1 ; j < final; ++j){
        if (v[j] > v[max]){
            max = j;
        }
    }
    int aux = v[inicio];
    v[inicio] = v[max];
    v[max] = aux;
    selectionSortDecRec(v, inicio + 1, final);
}
