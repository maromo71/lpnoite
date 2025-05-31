#ifndef ALUNO_H
#define ALUNO_H

#define MAX_ALUNOS 10000
#define MAX_NOME 61
#define MAX_CURSO 51

typedef struct Aluno {
    int matricula;
    char nome[MAX_NOME];
    char curso[MAX_CURSO];
    int periodo; //1 ao 6
}aluno;

//definir um ponteiro para este novo tipo
typedef aluno *p_aluno;

//vetor global para armazenar MAX_ALUNOS
extern p_aluno alunos[MAX_ALUNOS];

//prototipo das funcoes
//inicializar o vetor com NULL
void inicializaAlunos();

//cadastrar um novo aluno.
void cadastrarAluno();

//consultar aluno por matricula
void consultarAlunoMatricula();

//consultar aluno por parte do nome
void consularAlunoNome();

//rotina para alterar dados de um aluno
void alterarDadosAluno();

//rotina para imprimir os dados de um aluno
void imprimirUmAluno();

//rotina para imprimir todos os alunos cadastrados
void imprimirTodosAlunos();

void _exibirDadosAlunos(aluno * p_a);

#endif //ALUNO_H
