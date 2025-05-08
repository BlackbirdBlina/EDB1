#include "fib.h"

// Implementando a função fib
int fib(int n) {

    // Destacando/definindo os casos bases
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }

    // Realizando outros casos após os casos base
    return fib(n - 1) + fib(n - 2);
}
