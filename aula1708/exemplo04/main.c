#include <stdio.h>
#include <string.h>
int main(void) {
    char frase[] = "Minha terra tem palmeiras";
    puts(frase);
    printf("A frase e: %s \n", frase);
    puts("Muita calma nessa hora");

    printf("Digite a frase: \n");
    //fgets(frase, 100, stdin);
    //frase[strlen(frase)-1] = '\0';
    gets(frase);
    puts(frase);
    return 0;
}
