#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
    srand(time(NULL));
    int x = 0;
    //gerar 30 valores pares aleatórios
    for (int i=0; i<30; i++) {
        x = (rand() % 100) + 1;
        if ( x % 2 == 1) {
            i--;
            continue;
        }
        printf("Vez %d valor gerado %d \n", (i+1),x );
    }
    return 0;
}
