#include <stdio.h>
#include <string.h>

int main(void) {
    char chave[255], confirmacao[255];
    printf("Digite a chave de acesso: ");
    scanf("%[^\n]", chave);
    getchar();
    printf("Digite a confirmacao da chave de acesso: ");
    scanf("%[^\n]", confirmacao);
    getchar();
    if (strcmp(chave, confirmacao) != 0) {
        printf("Erro: chave nao confere\n");
        exit(1); //saida com erro
    }
    printf("Chave confirmada\n");
    char colaborador[51];
    printf("Digite o nome completo do colaborador: ");
    scanf("%[^\n]", colaborador);
    getchar();
    int num;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);
    char cracha[25] = {'\0'};
    strncpy(cracha, colaborador, num);
    char departamento[25];
    getchar();
    printf("Digite o codigo do departamento: ");
    fgets(departamento, 25, stdin);
    strcat(cracha, departamento);
    printf("Cracha gerado: %s \n", cracha);
    return 0;
}
