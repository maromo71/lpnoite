#include <stdio.h>
#include <string.h>
int main(void) {
    char palavra1[51] = "Brasil";
    char palavra2[51] = "BRASIL";
    //erro por nao ser suportado na versao C11
    if (strcmpi(palavra1, palavra2) == 0) {
        printf("iguais\n");
    }else {
        printf("diferentes\n");
    }
    return 0;
}
