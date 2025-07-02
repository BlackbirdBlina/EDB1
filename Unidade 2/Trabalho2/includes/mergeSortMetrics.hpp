#ifndef mergeSortMetrics_hpp
#define mergeSortMetrics_hpp
#include <vector>
#include "qtdComparTroca.hpp"
using namespace std;

ContaComparEtrocas merge(vector<TipoAlvo> &v, int inicioV1, int inicioV2, int finalV2);

ContaComparEtrocas mergeSortMetrics(vector<TipoAlvo> &v, int left, int right);

#endif
