#include <vector>
#include <cstdlib>
#include <ctime>
#include "quickSort.hpp"
using namespace std;


int pivoRandom(vector<int> &v, int inicio, int final){
    uniform_int_distribution<int> dist(inicio, final);
    int random_number = dist(engine);

    return random_number;
}

int quickDividInc(vector<int> &v, int indiceFirstElemento, int indiceLastElemento){
    int indicePivo = pivoRandom(v, indiceFirstElemento, indiceLastElemento);
    int aux = v[indicePivo];
    v[indicePivo] = v[indiceLastElemento];
    v[indiceLastElemento] = aux;
    int indiceInc = indiceFirstElemento;
    int indiceDec = indiceLastElemento - 1;

    while (indiceDec >= indiceInc){
        while (v[indiceInc] < v[indiceLastElemento] && indiceDec >= indiceInc){
            ++indiceInc;
        }
        while (v[indiceDec] > v[indiceLastElemento] && indiceDec >= indiceInc){
            --indiceDec;
        }
        if (indiceDec >= indiceInc){
            int aux = v[indiceInc];
            v[indiceInc] = v[indiceDec];
            v[indiceDec] = aux;
            ++indiceInc;
            --indiceDec;
        }
    }
    aux = v[indiceLastElemento];
    v[indiceLastElemento] = v[indiceInc];
    v[indiceInc] = aux;
    return indiceInc;
}

int quickDividDec(vector<int> &v, int indiceFirstElemento, int indiceLastElemento){
    int indicePivo = pivoRandom(v, indiceFirstElemento, indiceLastElemento);
    int aux = v[indicePivo];
    v[indicePivo] = v[indiceLastElemento];
    v[indiceLastElemento] = aux;
    int indiceInc = indiceFirstElemento;
    int indiceDec = indiceLastElemento - 1;

    while (indiceDec >= indiceInc){
        while (v[indiceInc] > v[indiceLastElemento] && indiceDec >= indiceInc){
            ++indiceInc;
        }
        while (v[indiceDec] < v[indiceLastElemento] && indiceDec >= indiceInc){
            --indiceDec;
        }
        if (indiceDec >= indiceInc){
            int aux = v[indiceInc];
            v[indiceInc] = v[indiceDec];
            v[indiceDec] = aux;
            ++indiceInc;
            --indiceDec;
        }
    }
    aux = v[indiceLastElemento];
    v[indiceLastElemento] = v[indiceInc];
    v[indiceInc] = aux;
    return indiceInc;
}

void quickSortInc(vector<int> &v, int tamanho){
    if (tamanho > 1){
        vector<ParIndices> pilha;

        // Passa mais de uma informação por vez
        pilha.push_back(ParIndices {0, tamanho - 1});

        while (pilha.size() > 0){
            ParIndices topPilha = pilha.back();
            pilha.pop_back();

            int indicePivo = quickDividInc(v, topPilha.inicio, topPilha.fim);

            if (indicePivo < topPilha.fim){
                pilha.push_back(ParIndices {indicePivo + 1, topPilha.fim});
            }

            if (indicePivo > topPilha.inicio){
                pilha.push_back(ParIndices {topPilha.inicio, indicePivo - 1});
            }
        }
    }
}


void quickSortDec(vector<int> &v, int tamanho){
        if (tamanho > 1){
        vector<ParIndices> pilha;

        // Passa mais de uma informação por vez
        pilha.push_back(ParIndices {0, tamanho - 1});

        while (pilha.size() > 0){
            ParIndices topPilha = pilha.back();
            pilha.pop_back();

            int indicePivo = quickDividDec(v, topPilha.inicio, topPilha.fim);

            if (indicePivo < topPilha.fim){
                pilha.push_back(ParIndices {indicePivo + 1, topPilha.fim});
            }

            if (indicePivo > topPilha.inicio){
                pilha.push_back(ParIndices {topPilha.inicio, indicePivo - 1});
            }
        }
    }
}

void quickSortIncRec(vector<int> &v, int indiceFirstElemento, int indiceLastElemento){
    if (indiceFirstElemento < indiceLastElemento){
        int indicePivo = quickDividInc(v, indiceFirstElemento, indiceLastElemento);
        quickSortIncRec(v, indiceFirstElemento, indicePivo - 1);
        quickSortIncRec(v, indicePivo + 1, indiceLastElemento);
    }
}

void quickSortDecRec(vector<int> &v, int indiceFirstElemento, int indiceLastElemento){
    if (indiceFirstElemento < indiceLastElemento){
        int indicePivo = quickDividDec(v, indiceFirstElemento, indiceLastElemento);
        quickSortDecRec(v, indiceFirstElemento, indicePivo - 1);
        quickSortDecRec(v, indicePivo + 1, indiceLastElemento);
    }
}

