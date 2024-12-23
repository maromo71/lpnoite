#ifndef ALUNO_H
#define ALUNO_H

#define MAX 100
typedef struct Aluno {
    char nome[81];
    int matricula;
    char endereco[121];
    char telefone[21];
    double nota;
} aluno;

typedef aluno *p_aluno;

extern p_aluno v[MAX];

// Inicializar o vetor de ponteiros com nulo
void inicializa();

// Ler dados alocando em uma nova posicao
// - i representa o indice do vetor
void ler_dados(int i);

// Recebe a posicao que se deseja imprimir
void imprimir_unico(int i);

// Imprimir todas as posicoes com dados
void imprimir_tudo();

//Procurar pela matricula
void procurar_aluno(int matricula);
#endif //ALUNO_H
