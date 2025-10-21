#include <stdio.h>

int indexOf(char *p_palavra, char letra);
void printr(char *p_s);
int main(void) {
    char palavra[51];
    char letra;
    printf("Digite uma palavra: \n");
    gets(palavra);
    fflush(stdin);
    printf("Digite uma letra: \n");
    letra = getchar();
    int retorno = indexOf(palavra, letra);
    if (retorno==-1) {
        printf("Letra nao encontrada\n");
    }else {
        printf("Posicao encontrada: %d \n",retorno);
    }
    printf("Palavra invertida: ");
    printr(palavra);
    return 0;
}

int indexOf(char *p_palavra, char letra) {
    char *p_inicial = p_palavra;
    while (*p_palavra != '\0') {
        if (*p_palavra == letra) {
            return p_palavra - p_inicial;
        }
        p_palavra++;
    }
    return -1;
}
void printr(char *p_s) {
    char *p_i = p_s;
    while (*p_s!='\0') p_s++; //desloca ate o fim
    p_s--; //volta uma casa para iniciar impressao
    while (p_s>=p_i) putchar(*p_s--);
}