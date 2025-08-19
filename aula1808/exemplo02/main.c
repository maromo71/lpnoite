//Caso o funcionario tenha idade superior a 40
//tera um aumento no salario de 20%, caso contrário: 18%
#include <stdio.h>

int main(void)
{
    double salario;
    printf("Digite o salario do cara: \n");
    scanf("%lf", &salario);
    int idade;
    printf("Digite a idade da pessoa: \n");
    scanf("%d", &idade);
    /**if classico (if else)
    if (idade >= 40) {
        salario *= 1.20;
    }else {
        salario *= 1.18;
    }*/
    //operador ternario
    salario *= idade > 40? 1.20 : 1.18;
    printf("Novo salario: %.2f\n", salario);
    return 0;
}