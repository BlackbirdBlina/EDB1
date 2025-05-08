#include<iostream>
#include "fib.h"
using namespace std;

int main () {
    int a;
    int result;
    cout << "Digite um número inteiro maior ou igual a 0: " << endl;
    cin >> a;

    result = fib(a);
    cout << "O n-ésimo número de Fibonacci é: " << result << endl;

    return 0;
}
