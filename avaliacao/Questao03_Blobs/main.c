#include <stdio.h>
//Exercicio do Blobs
int main(void) {
    int num; //Para o range informado (casos de testes)
    double comida[1000]; //limite maximo, ou pode ser o N depois de entrado
    // Leitura do número de casos de teste
    do {
        printf("Digite o numero de casos de teste:[1..1000]\n");
        scanf("%d", &num);
    }while (num < 1 || num>1000);
    //Como temos um vetor para guardar a carga de comida em KGs
    //vamos preenche-lo, validando as entradas
    for (int i = 0; i<num; i++) {
        do {
            printf("Digite a carga do periodo em KGs: \n");
            scanf("%lf", &comida[i]);
        }while (comida[i] <1 || comida[i]>1000);
    }
    //Saida dos casos de testes; Como comem a metade da carga de comida
    //por dia, a ideia é descobrir quantos dias demoraram para isso.
    for (int i=0; i<num; i++) { //para cada carga de comida
        int dias = 0; //contador de dias
        while ( comida[i] > 1.0) {
            comida[i]/=2;
            dias++;
        }
        printf("%3d dias \n", dias); //imprimindo o resultado do teste
    }
    return 0;
}