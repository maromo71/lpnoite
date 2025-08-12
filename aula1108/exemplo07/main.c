#include <stdio.h>
#include <math.h>
int main(void)
{
    double raio;
    printf("Digite o valor do Raio: \n");
    scanf("%lf", &raio);
    double area = M_PI * pow(raio, 2);
    printf("O valor do area e %.2lf\n", area);
    return 0;
}