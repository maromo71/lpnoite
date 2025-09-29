#include <stdio.h>
//1. Possível solução
int main(void) {
    int num=1, den=1;
    double s=0;
    for(int i=1;i<=20;i++) {
        if (den%2==1) {
            s+= (double) num/den;
        }else {
            s-= (double) num/den;
        }
        den++;
    }
    printf("Soma: %.4lf \n", s);
    return 0;
}