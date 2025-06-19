#include <vector>
#include "insertionSort.hpp"
using namespace std;

void insertionSortInc(vector<int> &v, int tamanho){
    for (int i = 1; i < tamanho; i++){
        int atual = v[i];
        int j = i - 1;

        while (j >= 0 && v[j] > atual){
            v[j + 1] = v[j];
            j -= 1;
        }
        v[j + 1] = atual;
    }
}

void insertionSortDec(vector<int> &v, int tamanho){
    for (int i = 1; i < tamanho; i++){
        int atual = v[i];
        int j = i - 1;

        while (j >= 0 && v[j] < atual){
            v[j + 1] = v[j];
            j -= 1;
        }
        v[j + 1] = atual;
    }

}

void insertionSortIncRec(vector<int> &v, int inicio, int final){

}


void insertionSortDecRec(vector<int> &v, int inicio, int final){

}
