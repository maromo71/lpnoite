# Atividade Prática: ProjetoLivros

Nesta atividade, você aplicará o conceito de **Tipo Abstrato de Dados (TAD)** e encapsulamento em linguagem C. A interface do módulo está completamente definida no arquivo de cabeçalho (`livro.h`). Seu objetivo é implementar a lógica interna no arquivo `livro.c` (tratando-o como uma caixa preta para o restante do sistema) e construir a interface com o usuário no arquivo `main.c`.

---

## 1. Interface Fornecida (`livro.h`)

Este arquivo define os tipos, estruturas, constantes e contratos de funções. **Não altere as assinaturas nem a estrutura declarada neste arquivo.**

```c
#ifndef LIVRO_H
#define LIVRO_H

#define MAX 100

// Definição da entidade Livro
typedef struct Livro {
    int isbn;
    char titulo[51];
    char autor[61];
    char editora[31];
    double valor;
} livro;

// Definição do tipo ponteiro para Livro
typedef livro* p_livro;

// Inicializa o vetor de ponteiros com NULL em todas as posições
void inicializar();

// Retorna a quantidade atual de livros alocados no acervo
int obter_total_cadastrados();

// Retorna o índice no vetor onde o ISBN foi encontrado, ou -1 caso não exista
int buscar_posicao_por_isbn(int isbn);

// Aloca memória (malloc) e realiza a leitura dos dados de um novo livro
void adicionar_livro();

// Solicita um ISBN ao usuário, busca e imprime os dados se encontrado
void buscar_livro_por_isbn();

// Localiza um livro por ISBN e permite atualizar título, autor, editora e valor
void alterar_livro_por_isbn();

// Exibe os dados formatados do livro presente na posição informada
void imprimir_livro(int pos);

// Percorre o acervo e exibe todos os livros atualmente cadastrados
void imprimir_todos();

// Libera com free() toda a memória alocada dinamicamente e aterra os ponteiros
void liberar_memoria();

#endif

```

---

## 2. O que deve ser implementado no `livro.c` (A Caixa Preta)

O arquivo `livro.c` deve conter a implementação das funções declaradas em `livro.h`, garantindo que os detalhes de armazenamento fiquem encapsulados:

* **Controle Interno do Vetor:** O vetor de ponteiros (`p_livro v[MAX];` ou `acervo[MAX]`) deve residir dentro de `livro.c`. Quem consome o módulo (`main.c`) não deve acessar o vetor diretamente por índices nem conhecer como a busca é realizada.
* **Alocação Dinâmica Segura:** Em `adicionar_livro`, verifique se há espaço disponível antes de prosseguir. Aloque a memória usando `malloc(sizeof(livro))` e valide se o ponteiro retornado não é `NULL`.
* **Segurança na Entrada de Dados:**
* Não utilize a função obsoleta e insegura `gets()`. Utilize `fgets()` respeitando os limites das strings (`51`, `61`, `31`).
* Trate a limpeza de buffer de teclado após leituras com `scanf()`.
* Remova o caractere `\n` residual capturado ao final das leituras com `fgets()`.


* **Tratamento de Duplicidade:** No cadastro, impeça a inserção de dois livros com o mesmo número de ISBN. Caso o ISBN já exista, alerte o usuário e descarte a inserção liberando a memória alocada.
* **Gerenciamento de Memória:** A função `liberar_memoria()` deve percorrer todas as posições do vetor, executar `free()` nos nós alocados e apontá-los de volta para `NULL`.

---

## 3. O que deve ser implementado no `main.c` (Programa Principal)

O arquivo `main.c` representa a camada de interação com o usuário final e deve seguir estas diretrizes:

* **Interação via Menu:** Construir um loop (`do-while` ou `while`) com menu textual contendo as opções:
1. Cadastrar Livro
2. Buscar Livro por ISBN
3. Alterar Livro por ISBN
4. Listar Todos os Livros
5. Exibir Total de Livros Cadastrados
6. Sair do Sistema


* **Encapsulamento Estrito:** O arquivo `main.c` deve incluir apenas `#include "livro.h"` e bibliotecas padrão de I/O (`<stdio.h>`). É proibido declarar o vetor de livros ou tentar manipular campos da `struct` diretamente no `main.c`.
* **Ciclo de Vida:**
* Chamar obrigatoriamente `inicializar()` antes da exibição do menu.
* Chamar obrigatoriamente `liberar_memoria()` antes do encerramento da função `main()`.



---




## 4. Entregáveis

Compacte e envie os arquivos:

* `livro.h`
* `livro.c`
* `main.c`