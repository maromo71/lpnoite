#include <stdio.h>
int countChar(char * p, char c);

int main(void) {
    char frase[255];
    char c;
    printf("Digite uma frase: ");
    scanf("%[^\n]", frase);
    getchar();
    printf("Digite uma letra: ");
    scanf("%c", &c);
    printf("Total de letras encontradas: %d\n ", countChar(frase, c));
    return 0;
}
int countChar(char * p, char c) {
    int total = 0;
    while (*p != '\0') {
        if (*p == c) {
            total++;
        }
        p++;//desloca para o prox caractere
    }
    return total;
}
