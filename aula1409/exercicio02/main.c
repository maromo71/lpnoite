#include <stdio.h>
#include <string.h>
/**
 *
 * @param str texto passado como argumetro
 * @param c letra a ser encontra no texto
 * @return o indice da posicao encontrada, caso contrario -1
 */
int indexOf(char * str, char c);

int main(void) {
    char texto[255];
    char letra;
    printf("Digite um texto completo: \n");
    fgets(texto, sizeof(texto), stdin);
    fflush(stdin);
    printf("Digite uma letra: \n");
    letra = getchar();
    int result = indexOf(texto, letra);
    if (result==-1) {
        printf("Letra nao encontrada no texto\n");
    }else {
        printf("Prim. posicao encontrada de letra: %d \n", result +1);
    }
    return 0;
}

int indexOf(char * str, char c) {
    for (int i=0; i<strlen(str); i++) {
        if (str[i] == c) return i;
    }
    return -1;
}