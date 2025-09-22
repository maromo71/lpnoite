//
// Created by memar on 22/09/2025.
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
    }else {
        printf("Impossivel divisao por zero\n");
        exit(1);
    }
}