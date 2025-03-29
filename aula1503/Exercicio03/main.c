#include <stdio.h>

int main(void) {
    int n;
    int cont = 0;
    for (int i = 1; i<=10; i++){
      printf("Digite o valor: \n");
      scanf("%d", &n);
      if (n % 2 == 0) cont++;
    }
    printf("Total de pares digitados: %d\n", cont);
    return 0;
}