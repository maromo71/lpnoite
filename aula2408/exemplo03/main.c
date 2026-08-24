#include <stdio.h>
#include <string.h>
int main(void) {
    char nome1[51] = "Ana Santos";
    char nome2[51] = "Jose Santos";
    if (strcmp(nome1, nome2) == 0) {
        printf("Sao iguais");
    }else if (strcmp(nome1, nome2) == -1) {
        printf("Primeiro nome esta na ordem correta");
    }else {
        printf("Segundo nome nao esta em ordem alfa");
    }

    return 0;
}
