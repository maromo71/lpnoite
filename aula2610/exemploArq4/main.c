#include <stdio.h>
typedef struct aluno {
    int rm;
    char nome[51];
} Aluno ;
int main(void) {
    Aluno aluno;
    fflush(stdin);
    //dados do aluno (registro aluno)
    printf("Digite o nome do aluno: ");
    scanf("%[^\n]", aluno.nome);
    printf("Digite o rm do aluno: ");
    scanf("%d", &aluno.rm);

    FILE *fp = fopen("c:\\dados\\aluno.txt", "a");
    if(fp == NULL) {
        printf("Erro ao abrir o arquivo\n");
        return -1;
    }
    //escrever os dados do aluno no Arquivo
    fprintf(fp, "RM: %d, Nome: %s\n", aluno.rm, aluno.nome);
    fclose(fp); //fechar o arquivo
    return 0;
}