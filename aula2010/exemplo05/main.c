#include <stdio.h>
int palindromo(char *p_str);
int main(void) {
    palindromo("ANA") ? printf("Palindromo") : printf("Nao eh palindromo");
    return 0;
}

int palindromo(char *p_str) {
    char *p_ini = p_str;
    while (*p_str != '\0') p_str++; //Desloca ate o fim
    p_str--; //retrocede uma posicao
    while (p_ini < p_str) {
        if (*p_ini != *p_str) return 0;
        p_ini++;
        p_str--;
    }
    return 1;
}