#include "soma.h"


int soma(int n){
    if(n == 0){
        return 0;
    }

    return n + soma(n - 1);
}
