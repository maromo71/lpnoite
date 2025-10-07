#include <stdio.h>
#include <string.h>

int indexOf(char *s, char l);
int lastIndexOf(char *s, char l);
int main(void) {
    char frase[101];
    fflush(stdin);
    printf("Digite um frase: \n");
    gets(frase);

    char letra;
    fflush(stdin);
    printf("Letra a encontrar: \n");
    letra = getchar();
    int pos = indexOf(frase, letra);
    if (pos != -1) {
        printf("Letra encontrada na posicao: %d \n", pos + 1);
    }else {
        printf("Letra nao encontrada");
    }
    pos = lastIndexOf(frase, letra);
    if (pos != -1) {
        printf("Letra encontrada na ult posicao: %d \n", pos + 1);
    }else {
        printf("Letra nao encontrada");
    }
    return 0;
}

int indexOf(char *s, char l) {
    int tam = strlen(s);
    for (int i = 0; i<tam; i++) {
        if (s[i]==l) return i;
    }
    return -1;
}
int lastIndexOf(char *s, char l) {
    int tam = strlen(s);
    for (int i=tam-1; i>=0; i--) {
        if (s[i]==l) return i;
    }
    return -1;
}