#include <iostream>
#include "imprimir.h"
using namespace std;

// Implementando a função imprimir
void imprimir(int n){

    // Destacando/definindo caso base
    if(n == 0){

        // Imprimindo caso base
        cout << n << endl;
        return;
    }
    // Imprimindo outros casos após o caso base
    cout << n << endl;
    imprimir(n - 1);
}
