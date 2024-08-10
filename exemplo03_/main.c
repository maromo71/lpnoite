#include <stdio.h>

int x_ = 10;

int somar(int x_s, int y_s){
    printf("Valor de x: %d\n", x_s);
    printf("Endereco de x: %d\n", &x_s);
    return x_s + y_s;
}
int main(void) {
    printf("Valor de x: %d \n", x_);
    printf("Endereco de x: %d\n", &x_);
    int x;
    printf("Digite o valor de x: \n");
    scanf("%d", &x);
    printf("Endereco de x: %d\n", &x);

    printf("Valor de x: %d \n", x);
    printf("Endereco de x: %d\n", &x);
    printf("Soma: %d \n", somar(3, 2));
    return 0;
}



