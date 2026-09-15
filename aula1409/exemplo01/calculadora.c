//
// Created by memar on 14/09/2026.
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
    printf("Impossivel didivir por zero\n");
    exit(1);
}