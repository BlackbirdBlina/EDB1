#include "soma.h"

// Implementando a função soma
int soma(int n){

    // Destacando/definindo o caso base
    if(n == 0){
        return 0;
    }

    // Realizando outros casos após o caso base
    return n + soma(n - 1);
}
