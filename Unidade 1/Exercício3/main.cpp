#include<iostream>
#include "fib.h"
using namespace std;

int main () {
    int a;
    int result;

    // Solicita um número ao usuário
    cout << "Digite um número inteiro maior ou igual a 0: " << endl;
    cin >> a;

    // Chamando a função fib passando o número "a" como argumento e guardando o resultado dessa função na variável result.
    result = fib(a);

    // Imprimindo o resultado da função na tela
    cout << "O n-ésimo número de Fibonacci é: " << result << endl;

    return 0;
}
