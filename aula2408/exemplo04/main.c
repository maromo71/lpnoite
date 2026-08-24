#include <stdio.h>

int main(void) {
    int nums[10];
    //entrada pelo usuario
    printf("Digite dez valores, teclando enter: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &nums[i]);
    }
    //Imprimir na ordem que o usuario entrou
    printf("Valores entrados\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\n", nums[i]);
    }
    //Ordenar os dez valores
    for (int i = 0; i < 10; i++) {
        for (int j = i+1; j < 10; j++) {
            if (nums[i] > nums[j]) {
                int aux = nums[i];
                nums[i] = nums[j];
                nums[j] = aux;
            }
        }
    }
    printf("Valores ordenados\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\n", nums[i]);
    }
    return 0;
}
