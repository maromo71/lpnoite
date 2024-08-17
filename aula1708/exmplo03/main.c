#include <stdio.h>

int main(void) {
    double salario;
    int tempo;
    printf("Digite o valor do salario: \n");
    scanf("%lf", &salario);
    printf("Digite o tempo trabalhado em anos: \n");
    scanf("%d", &tempo);
    salario *= tempo > 10 ? 1.15 : 1.12;
    /*
    if(tempo > 10){
        salario *= 1.15;
    }else{
        salario *= 1.12;
    } */
    printf("Novo salário: %.2lf \n", salario);

    return 0;
}
