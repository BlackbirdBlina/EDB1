## Insertion Sort

* O algoritmo de ordenação *Insertion Sort* é um algoritmo tão simples quanto o Selection Sort e funciona da seguinte forma:

    * Toma o valor da primeira posição como já ordenado.
    * Em seguida, compara com o segundo elemento do vetor.
    * Para ordenar, "abre" um espaço no vetor onde o valor em questão precisa ser inserido, movendo os elementos maiores e já ordenados uma posição à direita.
    * Não realiza necessariamente uma troca direta. Apenas desloca as posições.
    * considera os elementos um de cada vez, inserindo cada um em seu devido lugar entre os já considerados (mantendo-os ordenados).

Este algoritmo é chamado de *insertion sort*, porque funciona inserindo o elemento não ordenado na "lista" de elementos já ordenados.

* Possui grau de complexidade N².

## Importância

Apesar dos custos, esse algoritmo pode ser combinado com outras técnicas de busca:

    O espaço de inserção pode ser encontrado de forma mais eficiente usando o algoritmo de busca binária, pois a busca é feita no espaço ordenado.
    O número de deslocamentos pode ser diminuido usando lista ligada.

### Fonte
*SEDGEWICK, Robert. Algorithms. Addison-Wesley Publishing Company, 2010. Cap. 8 e 14*
