#include "calculadora.h"
#include <stdio.h>
#include <stdlib.h>
int somar(int a, int b){
    return a + b;
}

int subtrair(int a, int b){
    return a - b;
}

int multiplicar(int a, int b){
    return a  * b;
}

int dividir(int a, int b){
    if(b){
        return a / b;
    }
    printf("Erro ao dividir por zero\n");
    exit(1);
}
