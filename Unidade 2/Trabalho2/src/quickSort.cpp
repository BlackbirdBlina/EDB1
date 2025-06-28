#include <vector>
#include <cstdlib>
#include <ctime>
#include "quickSort.hpp"
using namespace std;


int pivoRandom(vector<int> &v, int inicio, int final){
    srand(static_cast<unsigned int>(time(nullptr)));
    int pivoAleatorio = inicio + rand() % (final - inicio + 1);
    return pivoAleatorio;
}

int quickDivid(vector<int> &v, int indiceFirstElemento, int indiceLastElemento){
    int indicePivo = pivoRandom(v, indiceFirstElemento, indiceLastElemento);
    int aux = v[indicePivo];
    v[indicePivo] = v[indiceLastElemento];
    v[indiceLastElemento] = aux;
    int indiceInc = indiceFirstElemento;
    int indiceDec = indiceLastElemento - 1;

    while (indiceDec >= indiceInc){
        // Para decrescente modifique a primeira condição do while para ">"
        while (v[indiceInc] < v[indiceLastElemento] && indiceDec >= indiceInc){
            ++indiceInc;
        }
        // Para decrescente modifique a primeira condição do while para "<"
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

void quickSort(vector<int> &v, int indiceFirstElemento, int indiceLastElemento){
    if (indiceFirstElemento < indiceLastElemento){
        int indicePivo = quickDivid(v, indiceFirstElemento, indiceLastElemento);
        quickSort(v, indiceFirstElemento, indicePivo - 1);
        quickSort(v, indicePivo + 1, indiceLastElemento);
    }
}
