#include <stdio.h>
struct Produto {
    int codigo;
    char descricao[51];
    double preco;
};
void imprimir(struct Produto * p_prod);
void ler(struct Produto *p_prod);
int main(void)
{
    //declarar uma variavel do tipo struct Produto
    struct Produto produto;
    ler(&produto);
    imprimir(&produto);
    return 0;
}
void imprimir(struct Produto *p_prod)
{
    printf("Dados do Produto: \n");
    printf("----------------- \n");
    printf("Codigo: %d \n", p_prod->codigo);
    printf("Descricao: %s \n", p_prod->descricao);
    printf("Preco: %.2f \n", p_prod->preco);
    printf("----------------- \n");
}
void ler(struct Produto *p_prod)
{
    printf("Insira o codigo do produto: ");
    scanf("%d", &p_prod->codigo);
    getchar();
    printf("Digite a descricao do produto: ");
    gets(p_prod->descricao);
    printf("Digite a preco do produto: ");
    scanf("%lf", &p_prod->preco);
}