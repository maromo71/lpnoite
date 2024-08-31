#include <stdio.h>

int main(void) {
    int dia;
    do{
        printf("Digite o dia da semana em inteiros: \n");
        scanf("%d", &dia);
    }while(dia <1 || dia>7);
    switch (dia) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terça-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sábado\n");
    }
    return 0;
}
