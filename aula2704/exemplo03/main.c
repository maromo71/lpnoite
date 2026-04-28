#include <stdio.h>
void inverter(char *palavra);
int indexOf(char *str, char c);
int main(void) {
    char palavra[22];
    printf("Digite um palavra: \n");
    gets(palavra);
    printf("Palavra: %s \n", palavra);
    inverter(palavra);
    fflush(stdin);
    char c;
    printf("Digite a letra a ser encontrada: \n");
    c = getchar();
    int posicao = indexOf(palavra, c);
    printf("Posicao encontrada: %d \n", posicao);
    return 0;
}
void inverter(char *palavra) {
    char *p_ini = palavra;
    char *ptr = palavra;
    while (*ptr != '\0') ptr++;
    ptr--;
    while (ptr >= p_ini) {
        printf("%c", *ptr);
        ptr--;
    }
}
int indexOf(char *str, char c) {
    int cont = 0;
    char *ptr = str;
    while (*ptr != '\0') {
        if (*ptr == c) {
            return cont;
        }else {
            ptr++;
        }
        cont++;
    }
    return -1;
}
