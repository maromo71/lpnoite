//
// Created by memar on 06/10/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

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
    printf("Nao pode dividir por ZERO\n");
    exit(1);
}