# Correção da Avaliação de Linguagem de Programação de 13/04/2026

## Questão 1
Cálculo de Série Harmônica Alternada [2,0 pontos]. Crie um programa em C que calcula e exibe a soma dos 20 primeiros termos da seguinte série:
***S = 1 - 1/2 + 1/3 - 1/4 + 1/5 - ... + 1/20***
O programa deve utilizar uma estrutura de repetição para iterar através dos termos, alternando entre soma e subtração, e apresentar o resultado formatado com 4 casas decimais.

```c
#include <stdio.h>
int main() {
    double soma = 0.0;
    for(int i=1; i<=20; i++){
        if(i % 2 == 1){
            soma+= 1 / (double)i;
        }else{
            soma-= 1 / (double)i;
        }
    }
    printf("Valor da soma: %lf \n", soma);
    return 0;
}
```
## Questão 2
Crescimento de População de Bactérias [3,0 pontos]. 
Uma cultura de bactérias dobra sua população a cada dia. O processo se torna instável e deve ser interrompido quando a população ultrapassa 100 mil indivíduos.
Escreva um programa que leia um número inteiro N, indicando o número de amostras a serem testadas. Em seguida, para cada amostra, o programa deve ler um valor inteiro P correspondente à população inicial de bactérias.
* Calcule e imprima quantos dias serão necessários para que a população de cada amostra ultrapasse 100 mil.
* **Entrada:** A primeira linha conterá um único inteiro N (1 ≤ N ≤ 100).
As N linhas seguintes conterão um valor inteiro P (1 ≤ P ≤ 100.000) correspondente à população inicial da amostra.
* **Saída:** Para cada caso de teste, imprima uma linha contendo o número de dias necessários para a população
ultrapassar 100 mil, seguido da palavra "dias".

```c
#include <stdio.h>
int main() {
    int N, P;
    do{
        printf("Informe o numero de testes: \n");
        scanf("%d", &N);
        if(N<1 || N<=100) printf("Valor invalido para entrada\n");
    }while(N<1 || N>100);
    //percorrer cada teste N
    for(int i=1; i<=N; i++){
        do{
            printf("Digite a populacao inicial de bacterias\n");
            scanf("%d", &P);
            if(P<1 || P>100000) printf("Populacao invalida \n");
        }while(P<1 || P>100000);
        int dias = 0;
        while(P <= 100000){
            P *= 2;
            dias++;
        }
        printf("%d dias \n", dias);
    }
    return 0;
}
```

## Questão 3
3). Matriz-Tabuleiro [3,0 pontos]
No Reino da Lógica, os magos criam matrizes-tabuleiro para seus jogos. A disposição das peças nesse tabuleiro segue um padrão lógico baseado na posição das casas. Sua tarefa é criar um programa que gere esse tabuleiro. Dado um tamanho T (para uma matriz quadrada TxT) informado pelo usuário, você deve preencher a matriz seguindo estas regras:
* 1. Se a soma dos índices (linha + coluna) for par, a posição deve receber o valor 1.
* 2. Se a soma dos índices (linha + coluna) for ímpar, a posição deve receber o valor 0.
Seu programa deve:
* Solicitar ao usuário o tamanho da matriz (ex: 5 para uma matriz [5][5]).
* Criar uma matriz conforme as regras. Use uma função chamada ***void gerarMatriz(int T, int matriz[T][T])***.
* Imprimir a matriz resultante, linha por linha, com os números separados por um espaço e tabulação
(\t). Use uma função ***void imprimirMatriz(int T, int matriz[T][T])***.

```c
#include <stdio.h>
void imprimirMatriz(int T, int matriz[T][T]){
    for(int i=0; i<T; i++){
        for(int j=0; j<T; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}
void gerarMatriz(int T, int matriz[T][T]){
    for(int i=0; i<T; i++){
        for(int j=0; j<T; j++){
            if( (i+j) % 2 == 0) {
                matriz[i][j] = 1;
            }else{
                matriz[i][j] = 0;
            }
        }
    }
}
int main(){
    int T;
    printf("Digite um valor inteiro de 1 ao 9: \n");
    scanf("%d", &T);
    int matriz[T][T];
    geraMatriz(T, matriz);
    imprimirMatriz(T, matriz);
    return 0;
}
```

## Questao 4
Análise de Código e Escopo [2,0 pontos] Considere o seguinte trecho de código escrito em linguagem C: - O que será impresso?
```c
#include <stdio.h>
int resultado = 10;
void processa(int x) {
    int resultado = 5;
    if (x > 0) {
        resultado += x;
    }
    printf("%d ", resultado);
}
int main() {
    int valor = 3;
    processa(valor);
    printf("%d", resultado);
    return 0;
}
```
Saída: 
8 10