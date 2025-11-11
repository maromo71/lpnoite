#include <stdio.h>

int main(void) {
    //Ponteiro para arquivo
    FILE * p_arq = NULL;
    //Abrir arquivo frutas.txt, caso nao exista sera criado
    p_arq = fopen("c:\\dados\\frutas.txt", "w");
    if (p_arq == NULL) {
        printf("Erro ao criar arquivo \n");
        return -1;
    }else {
        printf("Arquivo criado com sucesso. \n");
    }
    fclose(p_arq); // fechar com seguranca um arquivo
    return 0;
}