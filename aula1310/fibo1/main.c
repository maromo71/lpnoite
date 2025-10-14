#include <stdio.h>
int fibo(int n);
int fibonacci(int n);
int main(void) {
    int x = 12;
    printf("Fibonacci sequencia de %d = %d\n", x, fibonacci(x));
    return 0;
}
int fibonacci(int n) {
    if (n ==1 || n == 2) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}