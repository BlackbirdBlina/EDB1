#ifndef mergeSortMetrics_hpp
#define mergeSortMetrics_hpp
#include <vector>
#include "qtdComparTroca.hpp"
using namespace std;

ContaComparEtrocas merge(vector<int> &v, int inicioV1, int inicioV2, int finalV2);

ContaComparEtrocas mergeSortMetrics(vector<int> &v, int left, int right);

#endif
