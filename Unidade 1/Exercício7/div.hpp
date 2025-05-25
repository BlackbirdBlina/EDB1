#ifndef div_hpp
#define div_hpp

// Criando a classe para realizar divisões inteiras e capturar o resto da divisão
class Divisao {
  public:
    int quociente;
    int resto;

    // Declaração do construtor
    Divisao(int quociente, int resto);
};


Divisao dividir(int a, int b);

#endif
