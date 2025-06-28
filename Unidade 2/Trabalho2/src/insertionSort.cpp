#include <vector>
#include "insertionSort.hpp"
using namespace std;

void insertionSort(vector<int> &v, int tamanho){
    for (int elemento_n_ordenado = 1; elemento_n_ordenado < tamanho; ++elemento_n_ordenado){
        int aux = v[elemento_n_ordenado];
        int elemento_ordenado = elemento_n_ordenado - 1;

        // Caso queira ordenar de forma decrescente modifique o operador da segunda condição do while para "<"
        while (elemento_ordenado >= 0 && v[elemento_ordenado] > aux){
            v[elemento_ordenado + 1] = v[elemento_ordenado];
            elemento_ordenado -= 1;
        }
        v[elemento_ordenado + 1] = aux;
    }
}
