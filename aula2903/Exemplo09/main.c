#include <stdio.h>

int main(void) {
    char nome[4][21];
    for (int i=0; i<4; i++){
      fflush(stdin);
      printf("Digite o nome: \n");
      gets(nome[i]);
    }
    for (int i=0; i<4 ;i++){
      puts(nome[i]);
    }
    return 0;
}