#include "busca_seq_ordenada.hpp"
#include <iostream>

void ordenar(vector<int> &vetor, int tamanho){
    for (int i = 1; i < tamanho; i++){
        int atual = vetor[i];
        int j = i - 1;

        while (j >= 0 && vetor[j] > atual){
            vetor[j + 1] = vetor[j];
            j -= 1;
        }
        vetor[j + 1] = atual;
    }
}

int busca_seq_ordenada(const vector<int> &vetor, int n, int alvo){
    for (int i = 0; i < n; i++){
        if (vetor[i] == alvo) {
            return i;
        }
    }
    return -1;
}

int conta_especialidades_distintas(vector<int> &arr, int n){
    ordenar(arr, n);
    int ultimo_resultado = -1;
    int contador = 0;
    for (int i = 0; i < n; i++){
        int resultado = busca_seq_ordenada(arr, n, arr[i]);
        if (resultado != -1 && ultimo_resultado != resultado){
            contador += 1;
        }
        ultimo_resultado = resultado;
    }
    return contador;
}

// Função para verifica se a ordenção está sendo feita corretamente
// void exibir_vetor(vector<int> &vetor, int tamanho){
//     std::cout << "[ ";
//     for (int i = 0; i < tamanho; i++){
//         std::cout << vetor[i] << " ";
//     }
//     std::cout << "]" << std::endl;
// }
