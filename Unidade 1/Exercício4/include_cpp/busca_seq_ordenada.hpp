#pragma once
#include <vector>
using namespace std;

void ordenar(vector<int> &vetor, int tamanho);

int busca_seq_ordenada(const vector<int> &vetor, int n, int alvo);

int conta_especialidades_distintas(vector<int> &arr, int n);

// Essa função foi usada apenas para verificar a saída do vetor, para identificar se estava ordenando corretamente
// void exibir_vetor(vector<int> &vetor, int tamanho);
