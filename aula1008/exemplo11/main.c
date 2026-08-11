#include <stdio.h>
//mod de 3 = pin
//mod de 5 = pom
//mod de 3 e 5 = pinpom
//nao mod deles apresenta o proprio num
int main(void) {
    int base, teto;
    printf("Digite o valor base: \n");
    scanf("%d", &base);
    printf("Digite o valor teto: \n");
    scanf("%d", &teto);
    for (int i = base; i<= teto; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("pinpom\n");
        }else {
            if (i % 3 == 0) {
                printf("pin\n");
            }else if (i % 5 == 0) {
                printf("pom\n");
            }else {
                printf("%d\n", i);
            }
        }
    }
    return 0;
}
