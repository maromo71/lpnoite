#include <stdio.h>

int main(void) {
    double notas[15];
    double media=0.0, soma=0.0;
    for(int i=0;i<15;i++) {
        printf("Digite a nota do aluno: ");
        scanf("%lf",&notas[i]);
        soma+= notas[i];
    }
    media= soma/15;
    printf("A media dos alunos foi %.2lf \n", media);
    return 0;
}