#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    FILE * p_arq = fopen("C:\\arquivos\\notas.txt", "r");
    FILE * p_result = fopen("C:\\arquivos\\resultado.txt", "w");
    if (p_arq == NULL || p_result == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
    //quatro variaveis locais
    int ra;
    char nome[51];
    double nota1, nota2;
    // O loop continua enquanto o fscanf ler com sucesso os 4 campos
    while (fscanf(p_arq, "%d;%50[^;];%lf;%lf", &ra, nome, &nota1, &nota2) == 4) {
        double media = (nota1 + nota2) / 2;
        char resultado[15];
        media >= 6 ? strcpy(resultado, "Aprovado") : strcpy(resultado, "Reprovado");
        fprintf(p_result, "RA: %d | %-30s | N1: %.2f | N2: %.2f | Media: %.2f | %-15s\n",
               ra, nome, nota1, nota2, media, resultado);
    }
    fclose(p_arq);
    fclose(p_result);
    return 0;
}