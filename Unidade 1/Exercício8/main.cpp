#include <iostream>
#include <vector>
#include "anoBissexto.hpp"
using namespace std;

int main(){
    vector<int> anos = {2001, 2036, 2012, 2032, 1995, 2028, 2020, 2024, 1900};
    int nascimento = 1995;

    int proximoBissexto = encontraBissexto(anos, 9, nascimento);

    if(proximoBissexto != -1){
        cout << "O próximo ano bissexto posterior a " << nascimento << " é: " << proximoBissexto << endl;
    } else {
        cout << "Não foi possível encontrar o próximo ano bissexto após o ano de nascimeno informado no vetor de anos dado. Saída: " << proximoBissexto << endl;
    }
    
    return 0;
}
