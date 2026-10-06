#include <stdio.h>

int meu_strlen(char *p);

int main(void) {
    //programa que pede a frase para o usuario
    char frase[255];
    printf("Entre com uma frase: \n");
    gets(frase);
    printf("Tamanho da frase: %d\n",meu_strlen(frase));
    return 0;
}
int meu_strlen(char *p) {
    char *p_aux = p;
    while (*p != '\0') p++;
    return p - p_aux;
}
