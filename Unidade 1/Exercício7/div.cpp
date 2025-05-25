#include "div.hpp"

// Construtor da classe divisao
Divisao::Divisao(int quociente, int resto):
    quociente(quociente), resto(resto){}

// Função que realiza multiplicação através de somas sucessivas de modo recursivo
Divisao dividir(int a, int b){

    // Caso base
    if (a < b){
        return Divisao(0, a);
    } else {
        Divisao resultado = dividir(a - b, b);
        // O quociente é como se fosse um contador que calcula quantas vezes é possível subtrair o divisor do dividendo
        resultado.quociente += 1;
        return resultado;
    }
}
