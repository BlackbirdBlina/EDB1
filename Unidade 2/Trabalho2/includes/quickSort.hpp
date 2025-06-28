#ifndef quickSort_hpp
#define quickSort_hpp
#include <vector>
using namespace std;


int pivoRandom(vector<int> &v, int inicio, int final);

int quickDivid(vector<int> &v, int indiceFirstElemento, int IndiceLastElemento);

void quickSort(vector<int> &v, int indiceFirstElemento, int indiceLastElemento);

#endif
