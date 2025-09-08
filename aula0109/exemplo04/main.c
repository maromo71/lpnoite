#include <stdio.h>
#define T 5
int main(void) {
    int va[T] = {2, 4, 5, 6, 7};
    int vb[T] = {4, 6, 7, 8, 9};
    int vc[T] = {0};
    int p=0;
    for (int i = 0; i < T; i++) {
       for (int j = 0; j < T; j++) {
           if (va[i] == vb[j]) {
               vc[p++] = va[i];
           }
       }
    }
    for (int i = 0; i < T; i++) {
        printf("[%d ] ", vc[i]);
    }
    printf("\n");
    return 0;
}