#include <iostream>
#include "imprimir.h"
using namespace std;

int main() {
    int a;

    cout << "Digite um número inteiro maior ou igual a 0: " << endl;
    cin >> a;

    cout << "A contagem regressiva para o número " << a << " é: " << endl;

    imprimir(a);


    return 0;
}
