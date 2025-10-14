#include <stdio.h>
int fatorialC(int n);
int fatorial(int n);
int main(void) {
    int x = 5;
    //printf("Fatorial de %d = %d\n", x, fatorial(x));
    printf("Fatorial iterativo %d = %d\n", x, fatorialC(x));
    return 0;
}
//Iterativa oferece codigo menos legivel
//Entretanto, menos custoso.
int fatorialC(int n) {
    int fat = 1;
    for (int i = 1; i <= n; i++) {
        fat *= i;
    }
    return fat;
}
//Recursivas oferecem codigo mais legivel
//porem seu custosas em termos de memoria
int fatorial(int n) {
    if (n==1)return 1;
    return  n * fatorial(n-1);
}