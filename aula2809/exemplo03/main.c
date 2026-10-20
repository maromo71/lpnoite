#include <stdio.h>
int somar(int qtd) {
    if (qtd == 0) return 0;
    int valor = 0;
    printf("Digite o valor: ");
    scanf("%d", &valor);
    return valor + somar(qtd -1);
}
int main(void) {
    int qtd;
    printf("Digite a quantidade de valores a somar: \n");
    scanf("%d", &qtd);
    printf("Soma dos valores: %d\n", somar(qtd));
    return 0;
}
