#include <iostream>
#include "imprimir.h"
using namespace std;

void imprimir(int n){
    if(n == 0){
        cout << n << endl;
        return;
    }
    cout << n << endl;
    imprimir(n-1);
}
