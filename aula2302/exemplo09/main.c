#include <stdio.h>

//for - exemplo de laco infinito
int main(void) {
    int a =1, b=2, c=3;
    //gera um laco infinito.
    for (a = 5; b <= a + 5; c++) {
        printf("%d\t", c);
    }
    return 0;
}