#include <stdio.h>
#include <string.h>
int main(void) {
    char palavra[61] = "Mare";
    char letra;
    int contador = 0;
    while (palavra[contador] != '\0') {
        letra = palavra[contador++];
        printf("%c\n", letra);
    }
    //strlen devolve o tamanho correto do string
    for (int i=0; i<strlen(palavra); i++) {
        printf("%c\n", palavra[i]);
    }
    return 0;
}
