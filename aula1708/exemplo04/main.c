#include <stdio.h>

int main(void) {
    char sexo;
    printf("Digite\n'f' feminino\n'm' masculino\n'o' prefiro nao dizer\n");
    sexo = getchar();
    switch (sexo) {
        case 'f':
        case 'F':
            printf("Feminino\n");
            break;
        case 'm':
        case 'M':
            printf("Masculino\n");
            break;
        case 'o':
        case 'O':
            printf("Preferiu nao dizer\n");
            break;
        default:
            printf("Opção inválida\n");
    }
    return 0;
}
