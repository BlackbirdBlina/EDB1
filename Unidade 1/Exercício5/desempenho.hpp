#ifndef desempenho_hpp
#define desempenho_hpp
#include <vector>
using namespace std;

void popular(vector<int> &vetor, int tamanho);

int buscaSequencial(vector<int> &vetor, int tamanho, int chave);

int buscaBinaria(vector<int> &vetor, int tamanho, int chave);


#endif
