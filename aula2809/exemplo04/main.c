#include <stdio.h>
int fibo(int n, int * p_cont) {
    *p_cont = *p_cont + 1;
    if (n == 0 ) return 0;
    if (n == 1) return 1;
    return fibo(n-1, p_cont)+ fibo(n-2, p_cont);
}
int main(void) {
    int termo;
    int cont = 0;
    printf("digite o termo que deseja saber da seq de fibonacci>: \n");
    scanf("%d", &termo);
    printf("O fibonacci do termo %d ==> %d\n", termo, fibo(termo, &cont));
    printf("Quantas chamadas de pilhas foram feitas: %d \n", cont);
}
