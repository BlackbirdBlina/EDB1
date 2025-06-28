#include <vector>
#include "bubbleSort.hpp"
using namespace std;


void bubbleSort(vector<int> &v, int tamanho){
    for (int i = 0; i < tamanho - 1; i++) {
        bool flag = false;
        for (int j = 0; j < tamanho - i - 1; j++) {
            // Caso queira ordenar decrescente ajuste a condição abaixo para "<"
            if (v[j] > v[j + 1]) {
                int aux = v[j + 1];
                v[j + 1] = v[j];
                v[j] = aux;
                flag = true;
            }
        }
        if (!flag)
            break;
    }
}


