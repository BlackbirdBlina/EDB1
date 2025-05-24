#include "multi.hpp"

// Função que realiza multiplicação através de somas sucessivas de modo recursivo
int multi(int a, int b){

    // Caso base
    if (b == 0){
        return 0;
    } else {

        return multi(a, b - 1) + a;
    }
}


#include "multi.hpp"

// Função que realiza multiplicação através de somas sucessivas de modo recursivo
int div(int a, int b){

    // Caso base
    if (a < b){
        return 0;
    } else {

        return div(a-b, b) + 1;
    }
}
