#include <stdio.h>
#include <string.h>
int main(void) {
    char buffer[100];
    int idade;
    printf("Digite uma idade: \n");
    scanf("%d", &idade);
    printf("Idade digitada: %d \n", idade);

    sprintf(buffer, "Idade da pessoa acima: %d", idade);
    puts(buffer);
    return 0;
}