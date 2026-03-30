#include <stdio.h>
#include <ctype.h> //usar o tolower

int contarConsoantes(char s[]);
int contarVogais(char s[]);

int main() {
    char frase[100];
    int semEspaco = 0;

    printf("Digite uma frase: ");
    gets(frase);

    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] != ' ') semEspaco++;
    }

    printf("Vogais: %d\n", contarVogais(frase));
    printf("Consoantes: %d\n", contarConsoantes(frase));
    printf("Tamanho (sem espacos): %d\n", semEspaco);
    return 0;
}

int contarVogais(char s[]) {
    int cont = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        char c = tolower(s[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') cont++;
    }
    return cont;
}

int contarConsoantes(char s[]) {
    int cont = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        char c = tolower(s[i]);
        if (isalpha(c) && !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')) cont++;
    }
    return cont;
}