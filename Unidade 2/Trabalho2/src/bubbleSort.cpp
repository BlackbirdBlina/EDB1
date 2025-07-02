#include <vector>
#include "bubbleSortMetrics.hpp"
#include "qtdComparTroca.hpp"
using namespace std;


ContaComparEtrocas bubbleSortMetrics(vector<TipoAlvo> &v, int tamanho){
    ContaComparEtrocas contagem;
    contagem.qtdComparacoes = 0;
    contagem.qtdTrocas = 0;

    for (int i = 0; i < tamanho - 1; i++) {
        bool flag = false;
        for (int j = 0; j < tamanho - i - 1; j++) {

            ++contagem.qtdComparacoes;
            // Caso queira ordenar decrescente ajuste a condição abaixo para "<"
            if (v[j] > v[j + 1]) {
                TipoAlvo aux = v[j + 1];
                v[j + 1] = v[j];
                ++contagem.qtdTrocas;
                v[j] = aux;
                ++contagem.qtdTrocas;
                flag = true;
            }
        }
        if (!flag)
            break;
    }
    return contagem;
}


