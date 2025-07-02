#include <vector>
#include "selectionSortMetrics.hpp"
#include "qtdComparTroca.hpp"
using namespace std;

ContaComparEtrocas selectionSortMetrics(vector<TipoAlvo> &v, int tamanho){
    ContaComparEtrocas contagem;
    contagem.qtdComparacoes = 0;
    contagem.qtdTrocas = 0;

    for (int i = 0; i < tamanho - 1; ++i) {
        int min = i;
        for (int j = i + 1 ; j < tamanho; ++j){
            // Para decrescente altere a condição do if para ">"
            ++contagem.qtdComparacoes;
            if (v[j] < v[min]){
                min = j;
            }
        }
        TipoAlvo aux = v[i];
        v[i] = v[min];
        ++contagem.qtdTrocas;
        v[min] = aux;
        ++contagem.qtdTrocas;
    }
    return contagem;
}

