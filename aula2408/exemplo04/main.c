#include <stdio.h>
#include <string.h>
int main(void) {
    char nome[21];
    char sobrenome[21];
    char nome_completo[41] = {'\0'};
    printf("Digite o primero nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strlen(nome) -1] = '\0'; //trocar enter por \0
    printf("Digite o seu sobrenome: ");
    fgets(sobrenome, sizeof(sobrenome), stdin);
    sobrenome[strlen(sobrenome)-1] = '\0';
    //vamos fazer com que tenhamos o nome completo
    strcat(nome_completo, nome);
    strcat(nome_completo, " ");
    strcat(nome_completo, sobrenome);
    //saida
    printf("Nome completo: %s \n", nome_completo);
    printf("Primeiras 10 letras do nome vai para nova variavel\n");
    char dezletras[10] = {'\0'};
    strncpy(dezletras, nome_completo, 10);
    puts(dezletras);
    return 0;
}
