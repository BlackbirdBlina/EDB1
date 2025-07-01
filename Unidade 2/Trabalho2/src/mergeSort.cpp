#include <vector>
#include "mergeSortMetrics.hpp"
#include "qtdComparTroca.hpp"
using namespace std;

ContaComparEtrocas merge(vector<int> &v, int inicioV1, int inicioV2, int finalV2){
    ContaComparEtrocas contagem;
    contagem.qtdComparacoes = 0;
    contagem.qtdTrocas = 0;

    int finalV1 = inicioV2 - 1;
    // Variável criada para percorrer e preencher o vetor v após ordenação
    int start1 = inicioV1;
    int control = 0;
    int tempSize = finalV2 - inicioV1 + 1;
    vector<int> temp(tempSize);

    while (inicioV1 <= finalV1 && inicioV2 <= finalV2){
        // Caso queira ordenar de forma decrescente altere a condição do if para ">="
        ++contagem.qtdComparacoes;
        if (v[inicioV1] <= v[inicioV2]){
            temp[control] = v[inicioV1];
            ++contagem.qtdTrocas;
            ++inicioV1;
        } else {
            temp[control] = v[inicioV2];
            ++contagem.qtdTrocas;
            ++inicioV2;
        }
        ++control;
    }

    // Para metades irregulares
    while (inicioV1 <= finalV1){
        temp[control] = v[inicioV1];
        ++contagem.qtdTrocas;
        ++inicioV1;
        ++control;
    }

    while (inicioV2 <= finalV2){
        temp[control] = v[inicioV2];
        ++contagem.qtdTrocas;
        ++inicioV2;
        ++control;
    }

    // Preenchendo o vetor v com os valores ordenados
    for(int i = 0; i < tempSize; ++i){
        v[i + start1] = temp[i];
        ++contagem.qtdTrocas;
    }
    return contagem;
}

ContaComparEtrocas mergeSortMetrics(vector<int> &v, int left, int right){
    ContaComparEtrocas contagem;
    contagem.qtdComparacoes = 0;
    contagem.qtdTrocas = 0;

    if (left < right) {
        int mid = left + (right - left) / 2;

        // Chamadas recursivas das metades (esquerda e direita)
        ContaComparEtrocas contagemEsquerda = mergeSortMetrics(v, left, mid);
        ContaComparEtrocas contagemDireita = mergeSortMetrics(v, mid + 1, right);
        // Chamando a função para juntar (mergear) as metades ordenadas e ordena
        ContaComparEtrocas contagemMerge = merge(v, left, mid + 1, right);
        contagem.qtdComparacoes += (contagemEsquerda.qtdComparacoes + contagemDireita.qtdComparacoes + contagemMerge.qtdComparacoes);
        contagem.qtdTrocas += (contagemEsquerda.qtdTrocas + contagemDireita.qtdTrocas + contagemMerge.qtdTrocas);

    }
    return contagem;
}
