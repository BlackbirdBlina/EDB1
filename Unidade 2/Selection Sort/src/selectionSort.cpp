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

void selectionSortIncRec(vector<int> &v, int tamanho){

}

void selectionSortDecRec(vector<int> &v, int tamanho){

}
