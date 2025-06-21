#include <vector>
#include "bubbleSort.hpp"
using namespace std;

void bubbleSortInc(vector<int> &v, int tamanho){
    for (int i = 0; i < tamanho - 1; i++) {
        bool flag = false;
        for (int j = 0; j < tamanho - i - 1; j++) {
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

void bubbleSortDec(vector<int> &v, int tamanho){
    for (int i = 0; i < tamanho - 1; i++) {
        bool flag = false;
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (v[j] < v[j + 1]) {
                int aux = v[j + 1];
                v[j + 1] = v[j];
                v[j] = aux;
                flag = true;
            }
        }
        // Evita que itere até o final se o vetor já estiver ordenado
        if (!flag)
            break;
    }
}

void bubbleSortIncRec(vector<int> &v, int tamanho_atual, int tamanho_real){


    // Ao chamar novamente a função os argumentos passados estão atualizados *tamanho real não muda
    bubbleSortIncRec(v, tamanho_atual + 1, tamanho_real);

}

void bubbleSortDecRec(vector<int> &v, int tamanho_atual, int tamanho_real){


    // Ao chamar novamente a função os argumentos passados estão atualizados *tamanho real não muda
    bubbleSortDecRec(v, tamanho_atual + 1, tamanho_real);
}
