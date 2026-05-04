# Primeira Lista de Vetores

Preparei uma lista de exercícios para consolidarmos o que discutimos em aula sobre vetores na linguagem C. O objetivo aqui é ir além do básico: vamos trabalhar a lógica de movimentação de dados entre estruturas e a resolução de problemas práticos.

Lembrem-se de cuidar do gerenciamento dos índices e de validar as entradas sempre que possível. Bons estudos

## Exercícios

Olá, pessoal! Preparei uma lista especial de exercícios para consolidarmos o que discutimos em aula sobre vetores na linguagem C. O objetivo aqui é ir além do básico: vamos trabalhar a lógica de movimentação de dados entre estruturas e a resolução de problemas práticos.

Lembrem-se de cuidar do gerenciamento dos índices e de validar as entradas sempre que possível. Bons estudos!

---

### Lista de Exercícios: Vetores em C

#### 1. Inversão com Transporte
Escreva um programa que leia um vetor $A$ de 10 elementos inteiros. Em seguida, transporte esses elementos para um vetor $B$ de forma que o primeiro elemento de $A$ se torne o último de $B$, o segundo de $A$ o penúltimo de $B$, e assim por diante. Ao final, exiba os dois vetores.

#### 2. Intercalação de Vetores
Desenvolva um código que receba dois vetores, $V1$ e $V2$, ambos com 5 elementos cada. Gere um terceiro vetor $V3$ de 10 posições, preenchendo-o com a intercalação dos elementos de $V1$ e $V2$. 
* Exemplo: $V3[0] = V1[0]$, $V3[1] = V2[0]$, $V3[2] = V1[1]...$

#### 3. Separação de Pares e Ímpares
Crie um programa que leia 12 números inteiros e os armazene em um vetor principal. Depois, transporte todos os números pares para um vetor chamado `PARES` e os ímpares para um vetor chamado `IMPARES`. Exiba as três listas no console, ignorando as posições vazias dos vetores de destino.

#### 4. Cálculo de Desvio em Relação à Média
Vamos aplicar um pouco de estatística: leia um vetor com 8 notas de alunos. Primeiro, calcule a média aritmética dessas notas. Depois, gere um segundo vetor onde cada posição armazena a diferença entre a nota correspondente e a média calculada.

#### 5. Compactação de Vetor
Escreva um algoritmo que leia um vetor de 15 números inteiros. O programa deve identificar todos os valores nulos (zero) ou negativos e "transportar" apenas os números positivos para um novo vetor, eliminando os espaços vazios (compactação).

#### 6. Busca e Posição
Crie um programa que armazene 10 números aleatórios em um vetor. Peça ao usuário um número de "alvo". O programa deve percorrer o vetor e, caso encontre o número, transporte o índice (a posição) onde ele foi encontrado para um vetor de resultados (pois o número pode se repetir). Se o vetor de resultados estiver vazio ao final, informe que o número não foi encontrado.

---

### Dicas:
* **Constantes:** Use `#define TAM 10` para facilitar a manutenção do tamanho dos seus vetores.
* **Loops:** O laço `for` é seu melhor amigo aqui. Garanta que o controle do índice comece em $0$ e vá até $n-1$.
* **Atribuição:** Lembrem-se que em C não podemos copiar um vetor para outro fazendo `B = A;`. Precisamos transportar elemento por elemento dentro de um laço!

Qualquer dúvida, estou à disposição no laboratório ou pelo nosso canal oficial. Mãos à obra!

