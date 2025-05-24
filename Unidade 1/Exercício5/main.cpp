#include <iostream>
#include "desempenho.hpp"
#include <chrono>
#include <iomanip>
#include <ctime>
#include <vector>
using namespace std;
using namespace std::chrono;


int main(){
    vector<int> tamanho = {
        1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000,
        20000, 30000, 40000, 50000, 60000, 70000, 80000, 90000, 100000
    };

    for (int i = 0; i < 19; i++){
        vector<int> vetor(tamanho[i]);
        popular(vetor, tamanho[i]);

        high_resolution_clock::time_point start;
        duration<double> duracao;

        start = high_resolution_clock::now();

        buscaSequencial(vetor, tamanho[i], tamanho[i] - 1);

        duracao = duration_cast<duration<double>>(high_resolution_clock::now() - start);
        cout << "A busca sequencial demorou " << fixed << setprecision(10) << duracao.count() << endl;

        start = high_resolution_clock::now();

        buscaBinaria(vetor, tamanho[i], tamanho[i] - 1);

        duracao = duration_cast<duration<double>>(high_resolution_clock::now() - start);
        cout << "A busca binária demorou " << fixed << setprecision(10) << duracao.count() << endl;

    }

    return 0;
}
