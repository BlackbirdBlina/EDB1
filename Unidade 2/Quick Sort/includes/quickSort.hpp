#ifndef quickSort_hpp
#define quickSort_hpp
#include <vector>
#include <random>
#include <chrono>
using namespace std;

static random_device rd;
static minstd_rand engine(rd());

struct ParIndices{
    int inicio;
    int fim;
};

int pivoRandom(vector<int> &v, int inicio, int final);

int quickDividInc(vector<int> &v, int indiceFirstElemento, int IndiceLastElemento);

int quickDividDec(vector<int> &v, int indiceFirstElemento, int IndiceLastElemento);

void quickSortInc(vector<int> &v, int tamanho);

void quickSortDec(vector<int> &v, int tamanho);

void quickSortIncRec(vector<int> &v, int indiceFirstElemento, int indiceLastElemento);

void quickSortDecRec(vector<int> &v, int indiceFirstElemento, int indiceLastElemento);



#endif
