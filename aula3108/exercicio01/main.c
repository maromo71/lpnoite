#include <stdio.h>

int main(void) {
    short int x;
    unsigned int y;
    printf("Entre com um inteiro curto: \n");
    //a chave do exercício é determinar a mascara para a leitura
    scanf("%hd", &x);
    printf("Entre com um inteiro positivo: \n");
    //a chave do exercício é determinar a mascara para a leitura
    scanf("%u", &y);

    //idem para mostrar os valores
    printf("Mascara para inteiro curto %hd \n", x);
    printf("Mascara para inteiro sem sinal %u \n", y);
    printf("Tamanho para inteiro curto %ld bytes \n", sizeof(x));
    printf("Tamanho para inteiro sem sinal %ld bytes  \n", sizeof(y));
    return 0;
}
