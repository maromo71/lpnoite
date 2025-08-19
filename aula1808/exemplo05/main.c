#include <stdio.h>

int main(void)
{
    //for sem conteudo - gerar tempo de espera
    int i;
    printf("Comecou\n");
    for (i=0; i<=2000000000;i++);
    printf("Acabou \n");
    return 0;
}