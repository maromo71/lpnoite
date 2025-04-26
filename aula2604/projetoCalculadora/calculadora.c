#include "calculadora.h"
#include <stdio.h>
#include <stdlib.h>

int somar(int a, int b) {
    return a + b;
}


int subtrair(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

int dividir(int a, int b) {
    if (b) {
        return a /b;
    }
    printf("Erro de divisao por ZERO \n");
    exit(1);
}

int verificarPerfeito(int n) {
    int soma = 0;
    for (int i=1; i<=n/2; i++) {
        if (n % i == 0) {
            soma += i;
        }
    }
    if (soma == n) {
        return 1;
    }
    return 0;
}