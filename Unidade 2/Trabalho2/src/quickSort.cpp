#include <vector>
#include <random>
#include <ctime>
#include "quickSortMetrics.hpp"
#include "qtdComparTroca.hpp"
using namespace std;


int pivoRandom(vector<TipoAlvo> &v, int inicio, int final){
    uniform_int_distribution<TipoAlvo> dist(inicio, final);
    int random_number = dist(engine);

    return random_number;
}

// Parâmetro de saída para capturar informações por referência, evitando a criação de novas structs
int quickDivid(vector<TipoAlvo> &v, int indiceFirstElemento, int indiceLastElemento, ContaComparEtrocas &contagem){
    int indicePivo = pivoRandom(v, indiceFirstElemento, indiceLastElemento);
    TipoAlvo aux = v[indicePivo];
    ++contagem.qtdTrocas;
    v[indicePivo] = v[indiceLastElemento];
    ++contagem.qtdTrocas;
    v[indiceLastElemento] = aux;
    ++contagem.qtdTrocas;
    int indiceInc = indiceFirstElemento;
    int indiceDec = indiceLastElemento - 1;

    while (indiceDec >= indiceInc){
        // Para decrescente modifique a primeira condição do while para ">"
        while (v[indiceInc] < v[indiceLastElemento] && indiceDec >= indiceInc){
            ++indiceInc;
            ++contagem.qtdComparacoes;
        }
        ++contagem.qtdComparacoes;
        // Para decrescente modifique a primeira condição do while para "<"
        while (v[indiceDec] > v[indiceLastElemento] && indiceDec >= indiceInc){
            --indiceDec;
            ++contagem.qtdComparacoes;
        }
        ++contagem.qtdComparacoes;
        if (indiceDec >= indiceInc){
            TipoAlvo aux = v[indiceInc];
            ++contagem.qtdTrocas;
            v[indiceInc] = v[indiceDec];
            ++contagem.qtdTrocas;
            v[indiceDec] = aux;
            ++contagem.qtdTrocas;
            ++indiceInc;
            --indiceDec;
        }
    }
    aux = v[indiceLastElemento];
    ++contagem.qtdTrocas;
    v[indiceLastElemento] = v[indiceInc];
    ++contagem.qtdTrocas;
    v[indiceInc] = aux;
    ++contagem.qtdTrocas;
    return indiceInc;
}

ContaComparEtrocas quickSortMetrics(vector<TipoAlvo> &v, int indiceFirstElemento, int indiceLastElemento){
    ContaComparEtrocas contagem;
    contagem.qtdComparacoes = 0;
    contagem.qtdTrocas = 0;

    if (indiceFirstElemento < indiceLastElemento){
        int indicePivo = quickDivid(v, indiceFirstElemento, indiceLastElemento, contagem);
        ContaComparEtrocas contagemEsquerda = quickSortMetrics(v, indiceFirstElemento, indicePivo - 1);
        ContaComparEtrocas contagemDireita = quickSortMetrics(v, indicePivo + 1, indiceLastElemento);
        contagem.qtdComparacoes += (contagemEsquerda.qtdComparacoes + contagemDireita.qtdComparacoes);
        contagem.qtdTrocas += (contagemEsquerda.qtdTrocas + contagemDireita.qtdTrocas);
    }
    return contagem;
}
