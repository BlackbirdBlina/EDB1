# Especificação das funções utilizadas
Neste arquivo você encontrará dados referentes à 1ª atividade prática da disciplina IMD0029 - Estrutura de Dados Básicas 1 (EDB1), ministrada pelo professor João Guilherme, do curso de Bacharelado em Tecnologia da Informação (BTI) - UFRN, bem como as funções e a explicação de como funciona cada uma delas.
***
## Busca binária
* **int busca_binaria(int n):**\
\
    _Esta função recebe um inteiro e retorna um inteiro._\
    _Exemplo de chamada dessa função: busca_binaria(2)._\
    _Na implementação dessa função são definidas duas variáveis externas ao escopo do laço de repetição (while), que servirão para determinar o início e o fim do vetor, tanto para ele inteiro, quanto para as divisões que serão realizadas.\
    Feito isso o laço de repetição while é inicializado tendo como condição base o início menor ou igual ao final, dessa forma, enquanto o início for menor ou igual ao final o laço continuará a realizar o que está dentro de seu escopo.\
    Dentro do escopo do while o vetor recebido é dividido ao meio e são feitas 3 verificações:_

    * _Verifica se o alvo é o valor do meio. Nessa verificação é utlizada a função para encontrar a versão ruim, dessa forma, a função da versão ruim (isBadVersion) é uilizada como condição fo if de modo que:_

        * _Se sim, ou seja, true: Esse valor booleano é retornado indicando que o valor (número da versão) passado é uma versão ruim, nesse sentido significa que todas as versões posteriores a ele também são ruins. Logo, resta saber se a versão anterior também é ruim até encontrar a primeira de todas as versões ruins. Nesse sentido, o algoritmo vai realizando descartes para o lado onde os valores são maiores do que o valor que deu verdadeiro para a verificação da versão ruim, diminuindo 1 de valor passado._

        * _Se não, ou seja, false: Significa que o valor alvo passado não é uma versão ruim, então todos as versões anteriores a ele também não são ruins, logo descarta o lado onde os valores são menores do que o valor que deu falso para a verificação da versão ruim, aumentando 1 do valor passado._

***
## Verificação da versão ruim
* **bool isBadVersion(int version):**\
\
    _Esta função recebe um inteiro e retorna um booleano._\
    _Exemplo de chamada dessa função: isBadVersion(2)._\
    _Na implementação dessa função é definida uma variável que indicará uma versão ruim, esta variável servirá como "parâmetro", ou seja, como uma base de verificação, para que ao receber uma versão seja possível identificar se aquela versão é ou não ruim e procurar a primeira versão ruim dado um valor de versão qualquer._\
***

## Função ordenar

* **void ordenar(vector<int> &vetor, int tamanho):**\
\
    _Esta função recebe um vetor do tipo int e um tamanho também do tipo int, retornando um void, ou seja, na verdade não tem retorno ou não retorna nada._\
    _Exemplo de chamada dessa função: ordenar({0, 3, 2, 4, 1}, 5)._\
    _Na implementação dessa função se a informação/dado/número na posição vetor[1] for menor que a informação atual vetor[0] então, move o dado da posição 1 para a posição 0. Caso contrário, mantém os dados nas mesmas posições e segue para a próxima verificação._
***

## Busca sequencial
* **int busca_seq_ordenada(const vector<int> &vetor, int n, int alvo):**\
\
    _Esta função recebe um vetor do tipo int, um tamanho n e um alvo também do tipo int, retornando um inteiro._\
    _Exemplo de chamada dessa função: busca_seq_ordenada({0, 1, 2, 3, 4}, 5, 2)._\
    _Na implementação dessa função é realizada uma iteração "for" para verificar se para a posição i de um dado vetor passado, o valor dessa posição é igual ao alvo. Se true retorna o valor i, após percorrer todo vetor e não encontrar o alvo retorna -1, indicando que o alvo não pertence ao conjunto de dados daquele vetor._
***
## Contagem de especialidades distintas
* **int conta_especialidades_distintas(vector<int> &arr, int n):**\
\
     _Esta função recebe um vetor do tipo int e um tamanho n também do tipo int, retornando um inteiro._\
     _Exemplo de chamada dessa função: busca_seq_ordenada({0, 3, 2, 4, 1}, 5)._\
     _Na implementação dessa função é feita inicialmente a ordenação do vetor chamando a função de ordenação (ordenar) passando o vetor desordenado e o seu tamanho. São declaradas duas variáveis de controle sendo uma para identificar o último resultado (ultimo_resultado) que tem por objetivo comparar se é igual ao retorno da função da busca sequencial e um contador que irá receber a contagem somente quando o que for retornado da função busca_seq_ordenada, salvo na variável resultado, for diferente do último resultado (ultimo_resultado) e também diferente de -1. Caso contrário, a variável ultimo_resultado recebe resultado. Ao final do laço de repetição for, o valor do contador é retornado._

***

## Recursão

* **int recursao(const string &str, char alvo):**\
\
    _Esta função recebe uma string e um caractere alvo/chave do tipo char, retornando um inteiro._\
    _Exemplo de chamada dessa função: recursao("paralelepipedo", 'o')._\
    _Na implementação dessa função tem-se como caso base a string vazia, portanto é feita uma verificação se a string é ou n vazia utilizando o condicional if, tendo como condição a comparação do tamanho da string com o valor zero, se true retorna 0._\
    _Na situação em que a condição do if não é verdadeira, então há um "jump" para as linhas de código seguintes onde se cria uma nova string usando a função de substring do C++ para capturar uma nova string pegando da posição 1 até o tamanho atual da string - 1. Em seguida é feita uma verificação se para a string inicial na posição 0 o valor/caractere dessa posição é igual ao caractere alvo. Se for igual, ou seja, true, então conta 1 somando com a chamada da função novamente passando agora como argumento a nova string, com um caractere a menos, e realiza essa contagem até que seja percorrida toda a string. Salientando que se a verificação da false nada é contado e a função é chamada novamente sendo apena passada a nova string e o mesmo alvo. No final de tudo é retornado um inteiro_

