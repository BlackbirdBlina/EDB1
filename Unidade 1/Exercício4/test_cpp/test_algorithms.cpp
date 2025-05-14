#include <iostream>
#include <iomanip>
#include <vector>
#include "busca_seq_ordenada.hpp"
#include "busca_binaria.hpp"
#include "recursao.hpp"
using namespace std;

#define RUN_TEST(name, expr, expected)                                       \
    do {                                                                     \
        int result = (expr);                                                 \
        cout << "Encontrou " << result  << " como resultado final" << endl;  \
        cout << left << setw(25) << name                                     \
                  << ": " << ((result == (expected)) ? "OK" : "FAIL")        \
                  << endl;                                                   \
    } while(0)

int main() {
    //Vetor desordenado <POPULAR>
    vector<int> arr1 = {7, 5, 9, 3, 1, 4, 0, 2, 8, 6};
    //Tamanho do vetor <ALTERAR>
    int n1 = 10;
    //Vetor ordenado <POPULAR>
    vector<int> arr2 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    //Tamanho do vetor <ALTERAR>
    int n2 = 10;

    //Eexemplo de chamada da macro RUN_TEST
    //RUN_TEST("Titulo do teste", nome_da_funcao(entradas das funcao), resposta_esperada);
    // Conjunto de testes para busca sequencial em array desordenado e ordenado
    // RUN_TEST("Busca ordenada 1", busca_seq_ordenada(arr1, 30), /* esperado */ -1);
    // RUN_TEST("Busca ordenada 2", busca_seq_ordenada(arr1, 2), /* esperado */ 7);
    // RUN_TEST("Busca ordenada 3", busca_seq_ordenada(arr2, 11), /* esperado */ -1);
    // RUN_TEST("Busca ordenada 4", busca_seq_ordenada(arr2, 5), /* esperado */ 5);

    // Conjunto de testes para busca binária em array desordenado e ordenado
    RUN_TEST("Busca binaria", busca_binaria(6), /* esperado */ 4);
    RUN_TEST("Busca binaria", busca_binaria(30), /* esperado */ 4);
    RUN_TEST("Busca binaria", busca_binaria(5), /* esperado */ 4);

    // Conjunto de testes para contagem por recursão em string
    RUN_TEST("Recursiva 1", recursao("banana", 'a'), /* esperado */ 3);
    RUN_TEST("Recursiva 2", recursao("quadrado", 'd'), /* esperado */ 2);
    RUN_TEST("Recursiva 3", recursao("paralelepipedo", 'o'), /* esperado */ 1);
    RUN_TEST("Recursiva 4", recursao("quadro", 's'), /* esperado */ 0);

    return 0;
}

