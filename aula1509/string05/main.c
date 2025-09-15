#include <stdio.h>
#include <string.h>
int main(void) {
    char instituicao[41] = "Fatec Mogi Mirim Arthur de Azevedo";
    char municipio[21] = "Mogi Mirim";
    char * resp = strstr(instituicao, municipio);
    if (resp == NULL) {
        printf("Nao encontrado\n");
    }else {
        printf("Encontrado \n");
        int posicao = resp - instituicao;
        printf("Posicao inicial: %d \n", posicao);
        puts(resp);
    }
    return 0;
}