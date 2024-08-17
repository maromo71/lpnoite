#include <stdio.h>

int main(void) {
    //somatoria 1/1 + 2/3 + 3/5... + 50/99
    double soma = 0;
    for(int i=1, j=1; i<=50; i++, j+=2){
        soma += (double)i / j;
    }
    printf("Somatoria: %.2lf \n", soma);
    return 0;
}
