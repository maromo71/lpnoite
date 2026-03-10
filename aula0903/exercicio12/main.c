#include <stdio.h>
#define ALU 2
#define NOTA 10
int main(void) {
    char matriz[ALU][NOTA] = {{'\0'}};
    char gabarito[10] = {'a', 'b', 'c', 'd', 'a', 'b', 'c', 'd', 'd', 'd'};
    //Receber as 10 notas de cada aluno. Modifique ALU
    //para 5 depois dos testes.
    for (int i = 0; i < ALU; i++) {
        printf("Primerio aluno, suas notas: \n");
        for (int j = 0; j < NOTA; j++) {
            printf("Digite a letra da resposta [a..d]\n");
            fflush(stdin);
            scanf("%c", &matriz[i][j]);
        }
    }
    //conferir cada aluno o seu total de acertos
    for (int i = 0; i < ALU; i++) {
        int cont = 0;
        for (int j = 0; j < NOTA; j++) {
            if (matriz[i][j] == gabarito[j]) cont++;
        }
        printf("Aluno da pos %d do vetor, teve nota %d\n",i, cont);
    }
    return 0;
}