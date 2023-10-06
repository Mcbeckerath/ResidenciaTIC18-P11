# Repositório desenvolvido para resolução da atividade prática P11 
## Instrução pratica 11


- `Exercício 1`:  Escreva uma função chamada maxmin que receba um vetor de números inteiros chamado vetor, uma variável inteira n contendo o tamanho do vetor, e os endereços de duas variáveis inteiras, maximo e minimo nas quais será retornado o valor do
elemento de maior valor e o valor do elemento de menor valor.
Protótipo da Função:
void maxmin(int vetor[], int n, int &maximo, int &minimo);
Escreva também uma função principal (main) que use a função maxmin.
- `Exercício 2`: Qual o tipo de coesão e acoplamento da função do exercício 1?
- `Exercício 3`: Faça uma função que receba (por referência) 4 variáveis float e ordena (crescente) os
valores destas variáveis. Depois faça o programa principal para testar a sua função.
- `Exercício 4`: Escreva uma função calcula que:
a. receba como parâmetros duas variáveis inteiras, X e Y;
b. retorne em X a soma de X e Y;
c. retorne em Y a subtração de X e Y
- `Exercício 5`: Faça uma função “insere_meio(int vet[ ], int tam)” que insere um elemento no meio
de um vetor de números inteiros. Depois faça o programa principal para testar a sua
função.
Por exemplo:
Sendo o vetor = {1,2,3,4,5,6} e qtde = 6, ao usar
insere_meio(vetor, qtde, 100),
será retornado o novo valor de qtde, que passou a ser 7, e o vetor, ao término
da função, passará a ficar da seguinte forma: vetor= {1,2,3,100,4,5,6}.
Protótipo da função: int insere_meio( int *vetor, int qtde, int elemento);
- `Exercício 6`: Faça uma função que receba dois vetores de números inteiros e os seus
respectivos tamanhos por parâmetro e retorne um vetor com os valores dos dois
vetores intercalados. Depois faça o programa principal para testar a sua função.
Protótipo da função: int* intercala(int *vet1, int tam1, int *vet2, int tam2);
- `Exercício 7`: Faça uma função que receba um vetor de números inteiros por parâmetro, a
quantidade de elementos do vetor, e um multiplicador e multiplique cada elemento
do vetor pelo multiplicador.
Protótipo da função: void multiplica_por_n(int *vet, int qtde, int n);
- `Exercício 8`:Faça uma função chamada conta_primos que receba um vetor de números inteiros e
retorne a quantidade de números do vetor que são primos.
Lembrando que um número primo é aquele divisível apenas por 1 e por ele mesmo.
Protótipo da função:
int conta_primos (int *vet, int qtde);
- `Exercício 9`:Faça uma função para calcular o valor de S, dado por:
![image](https://github.com/Mcbeckerath/ResidenciaTIC18-P11/assets/125604118/37af3a34-9be0-4869-b435-9f688ef976c4)
Protótipo da função: float calc_serie(int N);
- `Exercício 10`: Escreva uma função que recebe uma string de caracteres e uma letra e devolve um
vetor de inteiros contendo as posições (índices no vetor da string) onde a letra foi
encontrada) e um inteiro contendo o tamanho do vetor criado (total de letras iguais
encontradas). Utilize o retorno de um vetor para retornar os índices e um ponteiro
para guardar o tamanho do vetor.
- `Exercício 11`:Escreva uma função que codifica uma string em um código secreto. A regra secreta de codificação é extremamente simples: substitui cada letra pela letra seguinte (Z é codificado como A). Por exemplo, “Estruturas de Dados” se transformaria em
“Ftusvuvsbt ef Ebept”. Escreva uma função para codificar e uma para decodificar
cadeias segundo este código. Suas funções devem escrever a string produzida em
uma string diferente da fornecida como entrada.
- `Exercício 12`: Escreva uma função que receba duas strings A e B por parâmetro e retorne uma terceira string C com os caracteres que aparecem tanto em A quanto em B. O
tamanho das string A e B pode ser diferente.
