#include <stdio.h>

int main(void) {
    char frase[100];
    char nome[51];
    int idade;
    printf("Digite seu nome completo: \n");
    scanf("%[^\n]", nome);
    fflush(stdin);
    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    sprintf(frase, "O aluno %s tem %d anos de idade \n", nome, idade);
    puts(frase);
    return 0;
}