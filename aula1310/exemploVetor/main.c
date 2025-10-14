#include <stdio.h>
void alimentarVetor(int v[], int t);
void unir(int x[], int y[], int z[], int tx, int ty);
void reverter(int x[], int t);
void apresentar(int x[], int t);


int main(void) {
    //declarando 04 vetores
    int vetor01[10];
    int vetor02[5];
    int vetor03[5];
    int unidos[10];
    //alimentar os tres valores
    alimentarVetor(vetor01, 10);
    alimentarVetor(vetor02, 5);
    alimentarVetor(vetor03, 5);
    //unir vetores em unidos[10];
    unir(vetor02, vetor03, unidos, 5, 5);
    //reverter o vetor original 1
    reverter(vetor01, 10);
    //apresetar vetor unidos
    apresentar(unidos, 10);
    //apresentar o vetor 1
    apresentar(vetor01, 10);
    return 0;
}
void alimentarVetor(int v[], int t) {
    printf("Novo vetor - Preencher dados\n");
    for (int i = 0; i < t; i++) {
        printf("Digite o %do) valor: \n", i+1);
        scanf("%d", &v[i]);
    }
    printf("Vetor preenchido \n\n");
}
void unir(int x[], int y[], int z[], int tx, int ty) {
    int cont = 0;
    for (int i = 0; i < tx; i++) {
        z[cont++] = x[i];
    }
    for (int i = 0; i < ty; i++) {
        z[cont++] = y[i];
    }
}
void reverter(int x[], int t) {
    int invertido[t];
    int cont = 0;
    printf("Vetor de invertidos\n");
    for (int i = t-1; i >= 0; i--) {
        invertido[cont] = x[i];
        printf("[%2d] ", invertido[cont++]);
    }
    printf("\n");

}
void apresentar(int x[], int t) {
    printf("Vetor solicitado impresso: \n");
    for (int i=0; i < t; i++) {
        printf("[%2d] ", x[i]);
    }
    printf("\n");
}
