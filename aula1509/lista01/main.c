#include <stdio.h>

int main(void) {
    char palavra[51];
    int chave;
    printf("Digite a palavra: \n");
    scanf("%[^\n]", palavra);
    fflush(stdin);
    do {
        printf("Digite um numero inteiro: [0..9]\n");
        scanf("%d", &chave);
    }while ((chave <0 || chave > 9));
    //cifra de cesar - com chave variavel
    int p=0;
    while (palavra[p]!='\0') {
        palavra[p] = palavra[p] + chave;
        p++;
    }
    printf("A palavra com chave: %s\n",palavra);
    return 0;
}