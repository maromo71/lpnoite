/**
 *
 * @param a Primeiro valor da operação
 * @param b Segundo valor da operação
 * @return Soma dos dois valores passados
 */
int somar(int a, int b);

/**
 *
 * @param a Primeiro valor da operação
 * @param b Segundo valor da operação
 * @return Subtrai dois valores passados
 */
int subtrair(int a, int b);

int multiplicar(int a, int b);

int dividir(int a, int b);

/**
 * Verifica se um numero  eh perfeito.
 *
 * Um numero  perfeito quando a soma de seus divisores (excluindo ele
 * mesmo) eh  igual a ele. Por exemplo, 6   um numero perfeito pois 1 + 2
 * + 3 = 6.
 *
 * @param n Numero a ser verificado
 * @return 1 se o numero for perfeito, 0 caso contrario
 */
int verificarPerfeito(int n);
