#include <stdio.h>
#define T 15

int main(void) {
    int v[T] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    for (int i= 0, j=T-1; i<T/2; i++, j--) {
        int troca = v[i];
        v[i] = v[j];
        v[j] = troca;
    }
    for (int i= 0; i<T;i++) printf("[%d]", v[i]);
    return 0;
}