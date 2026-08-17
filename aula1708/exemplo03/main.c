#include <stdio.h>

int main(void) {
    char alunos[5][21];
    double notas[5][3];
    int c;
    for (int i = 0; i < 5; i++) {//percorrer 5 alunos
        while((c = getchar()) != '\n'); //Tratando a entrada antes de ler o string
        printf("Digite o nome do aluno n.%d \n", i + 1);
        gets(alunos[i]); //ler um string
        for (int j = 0; j < 2; j++) {
            printf("Digite a nota %d do(a) aluno(as) %s\n", j+1, alunos[i]);
            scanf("%lf", &notas[i][j]);
        }
        //calcular a media
        notas[i][2] = (notas[i][0] + notas[i][1]) / 2;
    }
    //mostrar os resultados apurados
    for (int i =0; i <5; i++) {
        if (notas[i][2] >= 6.0) {
            printf("%s foi aprovado(a) com media %.2lf \n", alunos[i], notas[i][2]);
        }else {
            printf("%s foi reprovado(a) com media %.2lf \n", alunos[i], notas[i][2]);
        }
    }
    return 0;
}
