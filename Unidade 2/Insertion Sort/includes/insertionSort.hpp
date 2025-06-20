#ifndef insertionSort_hpp
#define insertionSorte_hpp
#include <vector>
using namespace std;


void insertionSortInc(vector<int> &v, int tamanho);

void insertionSortDec(vector<int> &v, int tamanho);

void insertionSortIncRec(vector<int> &v, int tamanho_atual, int tamanho_real);

void insertionSortDecRec(vector<int> &v, int tamanho_atual, int tamanho_real);



#endif
