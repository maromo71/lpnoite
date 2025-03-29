#include <stdio.h>

int main(void) {
  int soma = 0;
  int n;
  do{
      do{
        printf("Digite um dado [0..20] ou 0 para sair\n");
        scanf("%d", &n);
      }while (!(n>=0 && n<=20));
      soma += n;
  }while (n!=0);//saida
  printf("Somatoria final: %d \n", soma);
  return 0;
}