#include <stdio.h>
#include <string.h>

int main(void) {
    int senha, confirmacao;
    printf("Digite sua senha numerica\n");
    scanf("%d", &senha);
    printf("Digite a confirmacao da senha\n");
    scanf("%d", &confirmacao);
    if (senha != confirmacao) {
        printf("Erro: chaves nao conferem\n");
        return 1;
    }
    printf("Chave confirmada \n");
    char colab[21] = {'\0'};
    getchar();
    printf("Digite o nome do colaborador: \n");
    scanf("%[^\n]", colab);
    int n;
    char c;
    while((c = getchar()) != '\n'); //Tratando a entrada antes de ler o string
    printf("Digite um numero inteiro N:\n");
    scanf("%d", &n);
    char cracha[15] = {'\0'};

    strncpy(cracha, colab, n);
    while((c = getchar()) != '\n'); //Tratando a entrada antes de ler o string
    char depto[5] = {'\0'};
    printf("Digite o codigo do departamento: \n");
    scanf("%[^\n]", depto);
    strcat(cracha, depto);
    printf("Cracha: %s\n", cracha);
    return 0;
}
