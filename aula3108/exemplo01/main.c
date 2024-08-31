#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Exemplo de string contendo um número
    char str_num[] = " 12345 ";
    // Convertendo a string para um número inteiro usando atoi
    int num = atoi(str_num);
    num++;
    // Exibindo o número convertido
    printf("O número convertido, somado 1  é: %d\n", num);

    // Convertendo o número inteiro para uma string usando sprintf
    sprintf(str_num, "%d", num);

    // Exibindo a string resultante
    printf("O número como string é: \"%s\"\n", str_num);


    return 0;
}
