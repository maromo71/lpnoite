#include <stdio.h>

int stringLength(char *p);
void deslocarString(char *p);
int main(void) {
    char palavra[] = "Fatec Arthur de Azevedo";
    printf("Total Caracteres: %d \n", stringLength(palavra));
    deslocarString(palavra);
    return 0;
}

int stringLength(char *p) {
    char *p_inicio = p;
    while(*p != '\0') p++;
    return p - p_inicio;
}
void deslocarString(char *p) {
    char *p_i = p;
    while(*p != '\0') {
        putchar(*p++);
    }
    printf("\n");
    p--; //desloquei para casa anterior ao '\0'
    while(p >= p_i) {
        putchar(*p--);
    }
    p++;
}
