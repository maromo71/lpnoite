#include <stdio.h>

struct Produto {
    int codigo;
    char descricao[50];
    int quantidadeEstoque;
    double valor;
};

void lerProduto(struct Produto *p);

void imprimirProduto(struct Produto p);

int main(void) {
    struct Produto produto1;
    lerProduto(&produto1); //passagem por referencia usando ponteiro
    imprimirProduto(produto1); //passagem por valor
    return 0;
}

void lerProduto(struct Produto *p) {
    printf("Digite um codigo para o produto: \n");
    scanf("%d", &p->codigo);
    char c = getchar(); //fflush(stdin);
    printf("Digite a descricao do produto: \n");
    gets(p->descricao);
    printf("Digite a quantidade de estoque do produto: \n");
    scanf("%d", &p->quantidadeEstoque);
    printf("Digite o valor do produto: \n");
    scanf("%lf", &p->valor);
}
void imprimirProduto(struct Produto p) {
    printf("---------------------------\n");
    printf("Codigo: %d\n", p.codigo);
    printf("Descricao: %s\n", p.descricao);
    printf("Quantidade: %d\n", p.quantidadeEstoque);
    printf("Valor: %.2lf\n", p.valor);
    printf("---------------------------\n");
}