#ifndef qtdComparTroca_hpp
#define qtdComparTroca_hpp
using namespace std;

/* Artifício utilizado para flexibilizar o uso de tipos distintos no preenchimento do vetor
    Para alterar o tipo de dado dos valores do vetor basta trocar o tipo nessa definição */
typedef int TipoAlvo;

// Capturar e retorna um conjunto de informações
struct ContaComparEtrocas{
    int qtdComparacoes;
    int qtdTrocas;
};

#endif
