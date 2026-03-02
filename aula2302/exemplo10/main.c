#include <stdio.h>

int main(void) {
    int i = 0;
    //gerar tempo de processamento
    printf("Comecou\n");
    //laco sem conteudo
    for (i = 1; i<=2100000000; i++);
    printf("Terminou\n");
    return 0;
}