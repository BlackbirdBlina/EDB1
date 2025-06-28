#ifndef mergeSort_hpp
#define mergeSort_hpp
#include <vector>
using namespace std;

void mergeInc(vector<int> &v, int inicioV1, int inicioV2, int finalV2);

void mergeDec(vector<int> &v, int inicioV1, int inicioV2, int finalV2);

void mergeSortInc(vector<int> &v, int tamanho);

void mergeSortDec(vector<int> &v, int tamanho);

void mergeSortIncRec(vector<int> &v, int left, int right);

void mergeSortDecRec(vector<int> &v, int left, int right);



#endif
