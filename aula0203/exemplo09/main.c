
#include <stdio.h>

int main() {
    char buffer[100];
    char entrada[] = "123 456.789";
    int valorInt;
    long int valorLongInt;
    double valorDouble;

    // Usando sprintf() para formatar e armazenar uma string
    int idade = 30;
    sprintf(buffer, "Eu tenho %d anos.", idade);
    printf("%s\n", buffer); // Imprime: Eu tenho 30 anos.

    // Usando sscanf() para ler dados formatados de uma string
    int num1;
    double num2;
    sscanf(entrada, "%d %lf", &num1, &num2);
    printf("num1: %d, num2: %lf\n", num1, num2); // Imprime: num1: 123, num2: 456.789000

    // Usando atoi() para converter uma string para um inteiro
    char strInt[] = "42";
    valorInt = atoi(strInt);
    printf("Valor inteiro: %d\n", valorInt); // Imprime: Valor inteiro: 42

    // Usando atol() para converter uma string para um long int
    char strLongInt[] = "1234567890";
    valorLongInt = atol(strLongInt);
    printf("Valor long int: %ld\n", valorLongInt); // Imprime: Valor long int: 1234567890

    // Usando atof() para converter uma string para um número de ponto flutuante
    char strDouble[] = "3.14159";
    valorDouble = atof(strDouble);
    printf("Valor double: %lf\n", valorDouble); // Imprime: Valor double: 3.141590

    return 0;
}