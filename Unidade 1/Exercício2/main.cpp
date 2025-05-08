#include <iostream>
#include "imprimir.h"
using namespace std;

int main() {
    int a;

    // Solicitando um número ao usuário
    cout << "Digite um número inteiro maior ou igual a 0: " << endl;
    cin >> a;

    // Imprime mensagem de exibição
    cout << "A contagem regressiva para o número " << a << " é: " << endl;

    // Chama a função imprimir passando o número "a" como argumento
    imprimir(a);


    return 0;
}
