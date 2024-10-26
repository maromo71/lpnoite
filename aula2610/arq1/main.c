#include <stdio.h>

typedef struct {
    int codigo;
    char nome[100];
    double preco;
} Produto;

void cadastrarProdutos(FILE *file, int quantidade) {
    Produto produto;

    for (int i = 0; i < quantidade; i++) {
        printf("\nCadastrando produto %d:\n", i + 1);
        printf("Digite o codigo do produto: ");
        scanf("%d", &produto.codigo);
        printf("Digite o nome do produto: ");
        scanf(" %[^\n]", produto.nome);
        printf("Digite o preco do produto: ");
        scanf("%lf", &produto.preco);

        // Escreve o produto no arquivo texto com delimitadores
        fprintf(file, "%d;%s;%.2f\n", produto.codigo, produto.nome, produto.preco);
    }
}

void mostrarProdutos(FILE *file) {
    Produto produto;
    char linha[150];
    int linhas = 0;

    // Mover o ponteiro do arquivo para o início
    rewind(file);
    printf("\nLista de produtos cadastrados:\n");
    // Ler cada linha e fazer o parsing com delimitadores
    while (fgets(linha, sizeof(linha), file) != NULL) {
        // Faz o parsing da linha usando delimitadores
        if (sscanf(linha, "%d;%99[^;];%lf", &produto.codigo, produto.nome, &produto.preco) == 3) {
            printf("Codigo: %d, Nome: %s, Preco: %.2f\n", produto.codigo, produto.nome, produto.preco);
            linhas++;
        } else {
            printf("Erro ao ler linha: %s\n", linha);
        }
    }

    printf("\nTotal de produtos cadastrados: %d\n", linhas);
}

int main() {
    int quantidade;

    // Perguntar quantos produtos deseja cadastrar
    printf("Quantos produtos deseja cadastrar? ");
    scanf("%d", &quantidade);

    // Abrir um arquivo texto para escrita em modo append
    FILE *file = fopen("c:\\dados\\produtos.txt", "a");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return 1;
    }

    // Cadastrar os produtos
    cadastrarProdutos(file, quantidade);

    // Fechar o arquivo após a escrita
    fclose(file);

    // Abrir o arquivo texto para leitura
    file = fopen("c:\\dados\\produtos.txt", "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return 1;
    }

    // Mostrar todos os produtos cadastrados
    mostrarProdutos(file);

    // Fechar o arquivo após a leitura
    fclose(file);

    return 0;
}
