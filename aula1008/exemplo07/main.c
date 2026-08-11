#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
    srand(time(NULL));
    int numero = 0;
    int cont = 0;
    //TERMINA a geracao de numeros, quando o gerado for 50
    while (numero != 50) {
        numero = (rand() % 100)+1;
        cont++;
        printf("Num: %d - vez: %d\n", numero, cont);
    }
    printf("Foram gerados %d numeros \n", cont);
    return 0;
}
