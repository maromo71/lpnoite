# Lista de Exercícios: Fundamentos da Linguagem C

**Tópicos:** Entrada/Saída, Estruturas de Decisão (if, switch, ternário), Repetição (while, for), Vetores e Matrizes.

## Parte 1: Vetores e Lógica Condicional

1. **Estatísticas de Vetor:** Desenvolva um programa que leia 5 elementos inteiros em um vetor A. Ao final, o programa deve calcular e exibir:
* A soma de todos os valores ímpares.
* A soma de todos os valores pares.
* A soma total de todos os elementos.
* A porcentagem de números ímpares em relação aos pares.


2. **Processamento de Índices:** Escreva um programa que leia 10 valores em um vetor A. Construa um vetor B de mesmo tamanho seguindo a regra:
* Se o **índice** do elemento for par, o valor de B deve ser o valor de A multiplicado por 5.
* Se o **índice** do elemento for ímpar, o valor de B deve ser o valor de A somado com 5.
* Ao final, imprima ambos os vetores na ordem inversa (do último ao primeiro elemento).


3. **Inversão Simples:** Crie um programa que leia 10 valores inteiros e os armazene em um vetor. Em seguida, exiba os valores na tela exatamente na ordem inversa à que foram digitados.
4. **Filtro de Pares:** Crie um programa que solicite ao usuário 10 números inteiros, mas aceite **apenas números pares**. Caso o usuário digite um ímpar, o programa deve ignorar e pedir o número novamente até completar 10 pares. Ao final, mostre-os na ordem inversa.
5. **Média Escolar:** Escreva um programa para ler a nota da prova de 15 alunos e armazene-as em um vetor. Calcule e imprima a média geral da turma.
6. **Análise de Reais:** Faça um programa que preencha um vetor com 10 números reais (float/double). O programa deve calcular e mostrar:
* A quantidade de números negativos presentes no vetor.
* A soma de todos os números positivos.


7. **Extremos e Média:** Escreva um programa para ler 5 valores e, em seguida, mostre todos os valores lidos acompanhados pelo **maior** valor, pelo **menor** valor e pela **média** aritmética do conjunto.
8. **Localização de Memória:** Desenvolva um programa para ler 5 valores inteiros e, em seguida, informe ao usuário em qual **posição (índice)** do vetor se encontram o maior e o menor valor digitados.

---

## Parte 2: Matrizes e Estruturas Bidimensionais

9. **Matriz Triangular:** Faça um programa para gerar e imprimir uma matriz quadrada de ordem 5 (5x5) cujos valores preenchidos representem uma **matriz triangular superior** (elementos abaixo da diagonal principal devem ser zero).
10. **Soma de Matrizes:** Escreva um programa que leia duas matrizes, A e B, de dimensão 4x2. Construa uma matriz C de mesma dimensão, onde cada elemento de C seja a soma dos elementos correspondentes (mesma posição) de A e B.
11. **Decomposição Numérica:** Peça ao usuário dois números inteiros positivos ($a$ e $b$) menores que 10.000. Crie dois vetores ($va$ e $vb$) onde cada posição armazene um algarismo do número. A posição 0 deve conter o algarismo menos significativo (unidade).
12. **Sistema de Correção:** Leia uma matriz 5x10 representando as respostas de 10 questões de múltipla escolha de 5 alunos. Leia também um vetor de 10 posições contendo o gabarito oficial (caracteres 'a', 'b', 'c' ou 'd').
* O programa deve comparar as respostas e gerar um vetor chamado `resultado`, contendo a pontuação final (0 a 10) de cada aluno.


13. **Matriz Identidade:** Gere e imprima uma matriz de ordem 7 (7x7) do tipo **Identidade** (1 na diagonal principal e 0 nas demais posições).
14. **Desafio: Ordenação e Aleatoriedade:** Gere uma matriz 9x9 preenchida com valores aleatórios, garantindo que todos sejam **ímpares**. Após gerar a matriz:
* Transfira todos os 81 valores para um vetor unidimensional.
* Ordene este vetor em ordem crescente e exiba o resultado final.



---

**Dica para os alunos:** Lembrem-se de utilizar os comandos de entrada (`scanf`) e saída (`printf`) corretamente, e fiquem atentos aos índices dos vetores, que em C sempre iniciam em 0.

