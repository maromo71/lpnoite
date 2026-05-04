# Struct em C - Tipos definidos pelo usuário

Este é um pequeno projeto para aprender a usar o tipo struct em C.

```c
typedef struct {
    int matricula;
    char nome[100];
    char curso[50];
    int idade;
} Aluno;
```
O typedef é uma palavra-chave usada para criar um novo tipo de dado. Neste caso, criamos um novo tipo de dado chamado Aluno.

```c
typedef struct{
    Aluno* alunos[MAX_ALUNOS];
    int total_alunos;
} Turma;
```
Neste caso, criamos um novo tipo de dado chamado Turma.