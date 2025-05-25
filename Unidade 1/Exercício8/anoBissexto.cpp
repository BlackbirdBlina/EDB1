#include "anoBissexto.hpp"

void ordenar(vector<int> &vetor, int tamanho){
    for (int i = 1; i < tamanho; i++){
        int atual = vetor[i];
        int j = i - 1;

        while (j >= 0 && vetor[j] < atual){
            vetor[j + 1] = vetor[j];
            j -= 1;
        }
        vetor[j + 1] = atual;
    }
}

int buscaBinaria(vector<int> &vetor, int tamanho, int chave){
    int inicio = 0;
    int final = tamanho - 1;

    while (inicio <= final){
        int meio = (inicio + final)/2;
        if (vetor[meio] == chave){
            return meio;
        } else if (vetor[meio] > chave){
            inicio = meio + 1;
        } else {
            final = meio - 1;
        }

    }

    return final;
}

bool identificaBissexto(int ano){
    if(ano%400 == 0){
        return true;
    }

    if(ano%4 == 0 && ano%100 != 0){
        return true;
    }

    return false;
}

int encontraBissexto(vector<int> &vetor, int tamanho, int ano){

    ordenar(vetor, tamanho);
    int resultado = buscaBinaria(vetor, tamanho, ano);

    for(int i = resultado; i > 0; i--){

        if(identificaBissexto(vetor[i])){
            return vetor[i];
        }

    }

    return - 1;
}

// // Função para verifica se a ordenção está sendo feita corretamente
// void exibir_vetor(vector<int> &vetor, int tamanho){
//     std::cout << "[ ";
//     for (int i = 0; i < tamanho; i++){
//         std::cout << vetor[i] << " ";
//     }
//     std::cout << "]" << std::endl;
// }
