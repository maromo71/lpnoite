#include <stdio.h>

int main(void) {
    char letra;
    fflush(stdin);
    printf("Digite uma letra: ");
    letra = getchar();
    switch (letra) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("Trata-se de vogal\n");
            break;
        default:
            printf("Nao eh vogal\n");
    }
    return 0;
}
