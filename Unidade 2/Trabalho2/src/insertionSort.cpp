#include <vector>
#include "insertionSortMetrics.hpp"
#include "qtdComparTroca.hpp"
using namespace std;

ContaComparEtrocas insertionSortMetrics(vector<TipoAlvo> &v, int tamanho){
    ContaComparEtrocas contagem;
    contagem.qtdComparacoes = 0;
    contagem.qtdTrocas = 0;

    for (int elemento_n_ordenado = 1; elemento_n_ordenado < tamanho; ++elemento_n_ordenado){
        TipoAlvo aux = v[elemento_n_ordenado];
        int elemento_ordenado = elemento_n_ordenado - 1;

        // Caso queira ordenar de forma decrescente modifique o operador da segunda condição do while para "<"
        while (elemento_ordenado >= 0 && v[elemento_ordenado] > aux){
            ++contagem.qtdComparacoes;
            v[elemento_ordenado + 1] = v[elemento_ordenado];
            // Extra - Considerando "mover dados" como trocas
            ++contagem.qtdTrocas;
            elemento_ordenado -= 1;
        }
        ++contagem.qtdComparacoes;
        v[elemento_ordenado + 1] = aux;
        ++contagem.qtdTrocas;
    }
    return contagem;
}
