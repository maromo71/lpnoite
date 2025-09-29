#include <stdio.h>
// Na pratica soma 1 + 7 + 7 + 7 + 7  = 29
int main(void) {
    int ra = 897;
    int y = 1;
    int i = 0;
    while (i < 4) {
        y+= (ra % 10);
        i++;
    }
    printf("Valor de y: %d \n", y);
    return 0;
}