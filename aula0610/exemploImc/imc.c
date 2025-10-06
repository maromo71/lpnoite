//
// Created by memar on 06/10/2025.
//

#include "imc.h"

double calcularImc(double peso, double altura) {
    return peso / (altura * altura);
}


char * statusImc(double imc) {
    if (imc < 18.5) {
        return "abaixo do peso";
    }
    if (imc < 25) {
        return "peso normal";
    }
    if (imc < 30) {
        return "sobrepeso";
    }
    if (imc < 35) {
        return "obesidade grau I";
    }
    if (imc < 40) {
        return "obesidade grau II";
    }
    return "obesidade morbida";
}