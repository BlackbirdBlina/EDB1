#include "desempenho.hpp"
#include <vector>
using namespace std;


void popular(vector<int> &vetor, int tamanho){

    for (int i = 0; i < tamanho; i++){
        vetor[i] = i;
    }

}

int buscaSequencial(vector<int> &vetor, int tamanho, int chave){
    for (int i = 0; i < tamanho; i++){
        if (vetor[i] == chave){
            return i;
        }
    }
    return -1;
}

int buscaBinaria(vector<int> &vetor, int tamanho, int chave){
    int inicio = 0;
    int final = tamanho - 1;

    while (inicio <= final){
        int meio = (inicio + final)/2;
        if (vetor[meio] == chave){
            return meio;
        } else if (vetor[meio] < chave){
            inicio = meio + 1;
        } else {
            final = meio - 1;
        }

    }

    return - 1;
}
