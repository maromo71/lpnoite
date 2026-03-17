#include "calculadora.h"

#include <stdio.h>

//
// Created by memar on 16/03/2026.
//
#include <stdio.h>
#include "calculadora.h"

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
        return a / b;
    }
    printf("Erro na divisao por ZERO\n");
    exit(1);
}