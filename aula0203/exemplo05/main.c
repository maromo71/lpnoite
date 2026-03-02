#include <stdio.h>
#define TAM 10
//Dez notas. Encontrar a maior e a menor
//Mostrar a quantidade de alunos que teve maior e a menor nota
int main(void) {
    double notas[TAM] = {0};
    double maior, menor;
    int qtdMaior=0, qtdMenor=0;
    //1. Pedir 10 notas para o usuario
    for (int i = 0; i < TAM; i++) {
        printf("Insira a nota %d \n", i+1);
        scanf("%lf", &notas[i]);
    }
    //2. Encontrar qual é a maior nota
    maior = notas[0];
    for (int i = 1; i < TAM; i++) {
        if (notas[i] > maior) maior = notas[i];
    }
    //3. Encontra qual é a menor nota
    menor = notas[0];
    for (int i = 1; i < TAM; i++) {
        if (notas[i] < menor) menor = notas[i];
    }
    //4. Definir a quantidade de ocorrencias da maior e da menor nota
    for (int i = 0; i < TAM; i++) {
        if (notas[i] == menor) qtdMenor++;
        if (notas[i] == maior) qtdMaior++;
    }
    //5. apresentar as saidas
    printf("Maior nota: %.2lf\n", maior);
    printf("Menor nota: %.2lf\n", menor);
    printf("Qtd de ocorrencias da maior nota: %d \n", qtdMaior);
    printf("Qtd de ocorrencias da menor nota: %d \n", qtdMenor);
    return 0;
}