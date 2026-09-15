#include <stdio.h>
void imprimir_primeira_palavra(char * p_string);
int main(void) {
    char texto[255];
    printf("Digite um texto: ");
    fgets(texto,255,stdin);
    fflush(stdin);
    imprimir_primeira_palavra(texto);
    return 0;
}
void imprimir_primeira_palavra(char * p_string) {
    while (*p_string != '\0') {
        if (*p_string == ' ') return;
        putchar(*p_string++);
    }
}