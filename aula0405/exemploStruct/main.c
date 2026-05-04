#include <stdio.h>
#include <string.h>
struct Produto {
    int codigo;
    char descricao[61];
    double valor;
};

void imprimir_produto(struct Produto p);

void ler_produto(struct Produto* p);

int main(void) {
    //Definir uma variavel local para um produto
    struct Produto produto;
    ler_produto(&produto);
    //imprimindo os dados
    imprimir_produto(produto);
    return 0;
}

void imprimir_produto(struct Produto p) {
    printf("Cod. Produto: %d \n", p.codigo);
    printf("Descricao: %s\n", p.descricao);
    printf("Valor: %.2lf\n", p.valor);
}

void ler_produto(struct Produto* p) {
    printf("Cadastrando um produto\n");
    printf("Digite o codigo do produto: \n");
    scanf("%d", &p->codigo);
    fflush(stdin);
    printf("Digite a descricao: \n");
    fgets(p->descricao, 61, stdin);
    int tam = strlen(p->descricao);
    p->descricao[tam-1] = '\0';
    printf("Digite o valor do produto: \n");
    scanf("%lf", &p->valor);
}