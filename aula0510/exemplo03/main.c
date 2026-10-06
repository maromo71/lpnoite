#include <stdio.h>

int main(void) {
    char * p_texto = "Ola turma";
    char * p_auxiliar = p_texto;
    printf("%p\n", p_texto);
    //percorrendo o string
    while (*p_texto != '\0') {
        printf("%c", *p_texto++);
    }
    printf("\n\n");
    p_texto--;
    do {
        printf("%c", *p_texto);
        p_texto--;
    }while (*p_texto != '\0');
    //percorrendo de volta
    while (p_texto >= p_auxiliar) {
        printf("%c", *p_texto--);
    }
    p_texto++;
    printf("\nConteudo: [%s]\n", p_texto);
    return 0;
}
