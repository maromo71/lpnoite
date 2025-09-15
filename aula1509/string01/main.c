#include <stdio.h>
#include <string.h>
int main(void) {
    char frase[255];
    printf("Digite a frase: ");
    //scanf("%[^\n]", frase);
    fgets(frase, sizeof(frase), stdin);
    printf("Frase: %s", frase);
    frase[strlen(frase)-1] = '\0';
    return 0;
}