#ifndef quickSortMetrics_hpp
#define quickSortMetrics_hpp
#include <vector>
#include "qtdComparTroca.hpp"
using namespace std;


int pivoRandom(vector<int> &v, int inicio, int final);

int quickDivid(vector<int> &v, int indiceFirstElemento, int IndiceLastElemento, ContaComparEtrocas &contagem);

ContaComparEtrocas quickSortMetrics(vector<int> &v, int indiceFirstElemento, int indiceLastElemento);

#endif
