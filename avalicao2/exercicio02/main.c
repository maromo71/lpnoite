#include <stdio.h>
#define N_VENDEDORES 3
#define N_SEMANAS 4
void lerVendedores(int vendedores[]);
void lerVendas(double vendas[N_VENDEDORES][N_SEMANAS]);
double calcularTotalVendas(double vendas[N_VENDEDORES][N_SEMANAS]);
void melhorVendedorPrimeiraSemana(int vendedores[], double vendas[N_VENDEDORES][N_SEMANAS]);

int main() {
    int vendedores[N_VENDEDORES];
    lerVendedores(vendedores);

    double vendas[N_VENDEDORES][N_SEMANAS];
    lerVendas(vendas);

    double totalEmpresa = calcularTotalVendas(vendas);
    printf("\nTotal vendido pela empresa (todas as semanas e vendedores): R$ %.2f\n", totalEmpresa);

    melhorVendedorPrimeiraSemana(vendedores, vendas);

    return 0;
}

void lerVendedores(int vendedores[]) {
    printf("--- Leitura dos Códigos dos Vendedores ---\n");
    for (int i = 0; i < N_VENDEDORES; i++) {
        printf("Digite o codigo/ID do Vendedor %d: ", i + 1);
        scanf("%d", &vendedores[i]);
    }
}

void lerVendas(double vendas[N_VENDEDORES][N_SEMANAS]) {
    printf("\nLeitura das Vendas (R$): \n");
    for (int i = 0; i < N_VENDEDORES; i++) {
        for (int j = 0; j < N_SEMANAS; j++) {
            printf("Digite o valor vendido pelo Vendedor %d na Semana %d: R$ ", i + 1, j + 1);
            scanf("%lf", &vendas[i][j]);
        }
    }
}

double calcularTotalVendas(double vendas[N_VENDEDORES][N_SEMANAS]) {
    double total = 0.0;
    for (int i = 0; i < N_VENDEDORES; i++) {
        for (int j = 0; j < N_SEMANAS; j++) {
            total += vendas[i][j];
        }
    }
    return total;
}

void melhorVendedorPrimeiraSemana(int vendedores[], double vendas[N_VENDEDORES][N_SEMANAS]) {
    double maiorVenda = -1.0;
    int indiceMelhorVendedor = -1;

    for (int i = 0; i < N_VENDEDORES; i++) {
        if (vendas[i][0] > maiorVenda) {
            maiorVenda = vendas[i][0];
            indiceMelhorVendedor = i;
        }
    }

    if (indiceMelhorVendedor != -1) {
        printf("\nO vendedor com o melhor desempenho na Primeira Semana"
               " - R$ %.2f foi o Vendedor de codigo: %d\n",
               maiorVenda, vendedores[indiceMelhorVendedor]);
    } else {
        printf("\nNão foi possível identificar o melhor vendedor na primeira semana.\n");
    }
}