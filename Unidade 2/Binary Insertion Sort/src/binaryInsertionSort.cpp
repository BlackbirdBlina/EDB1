#include <vector>
#include <cstring>
#include <iostream>
#include "binaryInsertionSort.hpp"
#include "qtdComparTroca.hpp"
using namespace std;

int buscaBinaria(vector<int> &vetor, int tamanho, int chave, ContaComparEtrocas &contagem){
    int inicio = 0;
    int final = tamanho;

    while (inicio < final){
        int meio = (inicio + (final - inicio))/2;
        ++contagem.qtdComparacoes;
        if (vetor[meio] > chave){
            final = meio;
        } else{
            inicio = meio + 1;
        }
    }
    return inicio;
}

ContaComparEtrocas binaryInsertionSort(vector<TipoAlvo> &v, int tamanho){
    ContaComparEtrocas contagem;
    contagem.qtdComparacoes = 0;
    contagem.qtdTrocas = 0;

    for (int elemento_n_ordenado = 1; elemento_n_ordenado < tamanho; ++elemento_n_ordenado){
        TipoAlvo aux = v[elemento_n_ordenado];
        int elemento_ordenado = elemento_n_ordenado - 1;
        int indice = buscaBinaria(v, elemento_n_ordenado, aux, contagem);

        // Cria um bloco que otimiza os deslocamentos, não sendo necessário deslocar elemento por elemento
        memmove(v.data() + indice + 1, v.data() + indice, (elemento_n_ordenado - indice)*sizeof(TipoAlvo));

        ++contagem.qtdTrocas;
        // Caso queira ordenar de forma decrescente modifique o operador da segunda condição do while para "<"
        // for (int i = indice; i < elemento_n_ordenado; ++i){

        //     v[elemento_ordenado + 1] = v[elemento_ordenado];
        //     // Extra - Considerando "mover dados" como trocas
        //     ++contagem.qtdTrocas;
        //     elemento_ordenado -= 1;
        // }

        v[elemento_ordenado + 1] = aux;
        ++contagem.qtdTrocas;
    }
    return contagem;
}
