#include <stdio.h>

void cifrar_inplace(char *p_s);

int main(void) {
    char palavra[51];
    printf("Digite a palavra chave \n");
    gets(palavra);

    cifrar_inplace(palavra);
    printf("Palavra cifrada: %s\n", palavra);
    return 0;
}

void cifrar_inplace(char *p_s) {
    //1. varrer ate o final
    while (*p_s != '\0') {
        switch (*p_s) {
            case 'e':
            case 'E':
                *p_s = '3';
                break;
            case 's':
            case 'S':
                *p_s = '5';
                break;
            case 'o':
            case 'O':
                *p_s = '0';
                break;
            case 't':
            case 'T':
                *p_s = '7';
                break;
            case 'i':
            case 'I':
                *p_s = '1';
        }
        p_s++; //fora do switch, ainda no while
    }
}
