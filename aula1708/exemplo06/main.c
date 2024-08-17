#include <stdio.h>

int main(void) {
    long int i = 0;
    printf("Comecei\n");
    //laco sem conteudo
    for(i=0; i<=9999999999; i++);
    printf("terminei\n");
    return 0;
}
