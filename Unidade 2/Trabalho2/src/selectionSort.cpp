#include <vector>
#include "selectionSort.hpp"
using namespace std;

void selectionSort(vector<int> &v, int tamanho){
    for (int i = 0; i < tamanho - 1; ++i) {
        int min = i;
        for (int j = i + 1 ; j < tamanho; ++j){
            // Para decrescente altere a condição do if para ">"
            if (v[j] < v[min]){
                min = j;
            }
        }
        int x = v[i];
        v[i] = v[min];
        v[min] = x;
    }
}

