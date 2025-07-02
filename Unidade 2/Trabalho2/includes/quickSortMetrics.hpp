#ifndef quickSortMetrics_hpp
#define quickSortMetrics_hpp
#include <vector>
#include <random>
#include <chrono>
#include "qtdComparTroca.hpp"
using namespace std;

static random_device rd;
static minstd_rand engine(rd());

int pivoRandom(vector<TipoAlvo> &v, int inicio, int final);

int quickDivid(vector<TipoAlvo> &v, int indiceFirstElemento, int IndiceLastElemento, ContaComparEtrocas &contagem);

ContaComparEtrocas quickSortMetrics(vector<TipoAlvo> &v, int indiceFirstElemento, int indiceLastElemento);


#endif
