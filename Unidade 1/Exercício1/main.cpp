#include<iostream>
#include "soma.h"
using namespace std;

int main() {
    int a;
    int result;

    cout << "Digite um número inteiro maior ou igual a 0: " << endl;
    cin >> a;

    result = soma(a);

    cout << "A soma dos primeiros " << a << " números naturais é: " << result << endl;

    return 0;
}
