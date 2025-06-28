#ifndef quickSort_hpp
#define quickSort_hpp
#include <vector>
using namespace std;


int pivoRandom(vector<int> &v, int inicio, int final);

int quickDividInc(vector<int> &v, int indiceFirstElemento, int IndiceLastElemento);

int quickDividDec(vector<int> &v, int indiceFirstElemento, int IndiceLastElemento);

void quickSortInc(vector<int> &v, int tamanho);

void quickSortDec(vector<int> &v, int tamanho);

void quickSortIncRec(vector<int> &v, int indiceFirstElemento, int indiceLastElemento);

void quickSortDecRec(vector<int> &v, int indiceFirstElemento, int indiceLastElemento);



#endif
