#include <stdio.h>

int main(void) {
    double s=0;
    for (int i=1, j=1; i<=30; i++, j+=2) {
        if (i%2==1) {
            s += (double) i / j;
        }else {
            s -= (double) i / j;
        }
    }
    printf("Somatoria: %lf\n", s);
    return 0;
}
