#include <stdio.h>

int main(void) {
    int i;
    printf("Comecei a parada\n");
    //gerar tempo de espera
    for (i=1; i<=2000000000; i++);
    printf("Finalizei o processo\n");

    return 0;
}
