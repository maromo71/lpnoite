#include <stdio.h>

int main(void) {
  int razao;
  do{
    printf("Digite um valor para a razao da serie: \n");
    scanf("%d", &razao);
    if (razao<=0) printf("A razao deve ser maior que 0!\n");
  }while (razao<=0);
  int t=1; //primeiro termo dado pelo enunciado
  for (int i=1; i<=10; i++){
    printf("%d\n", t); //impressao dos termos
    t+=razao; //soma dos termos
  }
  return 0;
}