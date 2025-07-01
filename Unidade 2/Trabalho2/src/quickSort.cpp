#include <vector>
#include <cstdlib>
#include <ctime>
#include "quickSortMetrics.hpp"
#include "qtdComparTroca.hpp"
using namespace std;


int pivoRandom(vector<int> &v, int inicio, int final){
    srand(static_cast<unsigned int>(time(nullptr)));
    int pivoAleatorio = inicio + rand() % (final - inicio + 1);
    return pivoAleatorio;
}

// Parâmetro de saída para capturar informações por referência, evitando a criação de novas structs
int quickDivid(vector<int> &v, int indiceFirstElemento, int indiceLastElemento, ContaComparEtrocas &contagem){
    int indicePivo = pivoRandom(v, indiceFirstElemento, indiceLastElemento);
    int aux = v[indicePivo];
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
            int aux = v[indiceInc];
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

ContaComparEtrocas quickSort(vector<int> &v, int indiceFirstElemento, int indiceLastElemento){
    ContaComparEtrocas contagem;
    contagem.qtdComparacoes = 0;
    contagem.qtdTrocas = 0;

    if (indiceFirstElemento < indiceLastElemento){
        int indicePivo = quickDivid(v, indiceFirstElemento, indiceLastElemento, contagem);
        ContaComparEtrocas contagemEsquerda = quickSort(v, indiceFirstElemento, indicePivo - 1);
        ContaComparEtrocas contagemDireita = quickSort(v, indicePivo + 1, indiceLastElemento);
        contagem.qtdComparacoes += (contagemEsquerda.qtdComparacoes + contagemDireita.qtdComparacoes);
        contagem.qtdTrocas += (contagemEsquerda.qtdTrocas + contagemDireita.qtdTrocas);
    }
    return contagem;
}
