#include <stdio.h>

int main(void) {
    int a = 10;
    int b = 20;
    int * p_a = &a;
    int * p_b = &b;
    printf("%d\n", *p_a);
    printf("%d\n", *p_b);
    p_a = p_b;
    printf("%d\n", *p_a);
    printf("%p\n", p_b);
    printf("%p\n", p_a);
    *p_b = 11;
    printf("%d\n", *p_a);
    printf("%d\n", b);
    return 0;
}
