#include <stdio.h>
// s = 1/1 + 2/3 + 3/5 + 4/7 + ... + 50/99
int main(void) {
    double s = 0;
    for (int i=1, j=1; i<=50; i++, j+=2) {
        s += i/(double)j;
    }
    printf("Somatoria: %lf\n", s);
    return 0;
}