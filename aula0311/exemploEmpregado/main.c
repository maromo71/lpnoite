#include <stdio.h>
typedef struct  {
    int matr;
    double salario;
    char nome[51];
}Empregado;
void imprimir(Empregado empregado);
void ler_dados(Empregado * p_empregado);
int main(void) {
    //Dados de um unico empregado. Usuario entrar com os dados
    Empregado empregado;
    ler_dados(&empregado);
    imprimir(empregado);
    return 0;
}
void imprimir(Empregado empregado) {
    printf("==============================\n");
    printf("==== Dados do Funcionario ====\n");
    printf("Matricula: %d \n", empregado.matr);
    printf("Salario: %.2f \n", empregado.salario);
    printf("Nome: %s\n", empregado.nome);
    printf("==============================\n");
}
void ler_dados(Empregado * p_empregado) {
    printf("Digite a matricula do empregado: \n");
    scanf("%d", &p_empregado->matr);
    fflush(stdin);
    printf("Digite o nome do empregado: \n");
    gets(p_empregado->nome);
    fflush(stdin);
    printf("Digite o salario do empregado: \n");
    scanf("%lf", &p_empregado->salario);
}