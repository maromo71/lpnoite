#include <stdio.h>
#include <string.h>
int main(void) {
    char cpf[12];
    printf("Digite cpf sem traco ou ponto: \n");
    scanf("%[^\n]", cpf);
    if (strlen(cpf)!=11) {
        printf("Erro: cpf com traco, ponto ou incompleto\n");
        return 1;
    }
    int soma = 0;
    for (int i = 0; i <9; i++) {
        soma += (cpf[i] - '0') * (10 - i); //ascii - '0' retorna o inteiro
    }
    int prim = 11 - (soma % 11);
    if (prim >= 10) prim = 0;
    printf("Primeiro digito: %d \n", prim);
    soma = 0;
    for (int i = 0; i <10; i++) {
        soma += (cpf[i] - '0') * (11 - i);
    }
    int seg = 11 - (soma % 11);
    if (seg >= 10) seg = 0;
    printf("Segundo digito: %d \n", seg);
    if (prim == (cpf[9]-'0') && seg == (cpf[10]-'0')) {
        printf("CPF Valido\n");
    }else {
        printf("CPF Invalido\n");
    }
    return 0;
}