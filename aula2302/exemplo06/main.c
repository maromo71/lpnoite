#include <stdio.h>

int main(void) {
    int idade = 18; //variavel idade do tipo inteiro
    int temHabilitacao = 1;
    if (idade >= 18) {
        printf("O usuario pode ter habilitacao\n");
        printf("Checando se estah habilitado\n");
        /*
         * No processo verificamos se tem habilitacao primeiro
         * depois se tiver mostra a mensagem
        */
        if (temHabilitacao) {
            printf("Usuario pode alugar carro\n");
        }else {
            printf("Apesar de maior de idade. Nao pode\n");
        }
    }else {
        printf("Não pode nem comecar processo para tirar hab\n");
    }
    return 0;
}