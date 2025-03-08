#include <stdio.h>

int main(void) {
    long int i = 0;
    //printf("Comecou\n");
    //for (i=0; i<=10000000000; i++); //laco sem conteudo
   // printf("Terminou\n");
    //printf("%d\n", i);
    //abaixo um laco infinito. Obrigatorio colocar um break
    for (int i=0;;i++){
      printf("%d\n", i);
      if (i % 3333 == 3) break; //para no 3.
    }

    return 0;
}