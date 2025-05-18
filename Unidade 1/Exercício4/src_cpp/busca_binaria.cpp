#include "busca_binaria.hpp"

int busca_binaria(int n){
    int inicio = 1;
    int final = n;
    while (inicio <= final){
        int meio = (inicio + final)/2;

        if(isBadVersion(meio)){
            final = meio - 1;
        } else{
            inicio = meio + 1;
        }
    }
    return inicio;
}


bool isBadVersion(int version){
    int bad = 4;
    return version >= bad;
}
