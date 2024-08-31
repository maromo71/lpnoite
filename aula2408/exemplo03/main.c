#include <stdio.h>
#include <string.h>
//leitura de um string e impressao
int main(void) {
    char nome[51];
    printf("Digite seu nome completo: \n");
    fgets(nome, sizeof(nome), stdin);
    nome[strlen(nome) - 1] = '\0';
    char letra;
    printf("Digite um letra: \n");
    letra = getchar();
    printf("Seu nome completo: '%s' \n", nome);
    puts(nome);
    printf("Letra digitada: '%c'\n ", letra);
    fflush(stdin);
    printf("Digite uma nova letra: \n");
    letra = getchar();
    return 0;
}
