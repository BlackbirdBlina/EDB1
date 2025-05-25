#include <iostream>
#include "div.hpp"
using namespace std;


int main() {
    int a;
    int b;
    cout << "Digite um número inteiro para ser dividido (Dividendo): " << endl;
    cin >> a;
    cout << "Digite um número inteiro para a quanidade de vezes que deseja dividir o dividendo (Divisor): " << endl;
    cin >> b;

    if(b == 0){
        cout << "Não é possível realizar uma divisão por zero (0)" << endl;
        return 0;
    }

    Divisao result = dividir(a, b);

    cout << "O resultado da divisão foi quociente = " << result.quociente << " e resto = " << result.resto << endl;

}
