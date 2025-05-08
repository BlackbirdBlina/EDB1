#include<iostream>
#include "soma.h"
using namespace std;

int main() {
    int a;
    int result;

    // Solicitando um número ao usuário
    cout << "Digite um número inteiro maior ou igual a 0: " << endl;
    cin >> a;

    // Chamando a função soma passando o número "a" como argumento e guardando o resultado dessa função na variável result.
    result = soma(a);

    // Imprimindo o resultado da função na tela
    cout << "A soma dos primeiros " << a << " números naturais é: " << result << endl;

    return 0;
}
