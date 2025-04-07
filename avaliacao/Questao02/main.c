#include <stdio.h>
/*
 *
 *2). Fazer um programa em C, utilizando estrutura de repetição,
 *que calcule escreva a soma dos 30 primeiros termos da seguinte série [2 pontos]:

 */
int main(void) {
    //forma didádica. No dia da correcao em sala, apresentarei de
    //outra maneira possível.
    double soma=0, numerador=1, denominador=1;
    for (int i = 1; i <=30; ++i) {
        soma+= numerador / denominador;
        numerador+=2;
        denominador++;
    }
    printf("Soma: %.2lf \n", soma);
    return 0;
}