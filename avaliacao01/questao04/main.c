#include <stdio.h>
#include <string.h>
int main(void) {
    char primeira[21] = "Marcos";
    char segunda[21] = "Moraes";
    char copia[41] = {0};
    strcpy(copia, primeira);
    printf("Copia: %s\n", copia);
    strcat(copia, " ");
    strcat(copia, segunda);
    printf("String resultante: %s\n", copia);
    printf("Qtd de caracteres da string final: %d\n", strlen(copia));
    return 0;
}
