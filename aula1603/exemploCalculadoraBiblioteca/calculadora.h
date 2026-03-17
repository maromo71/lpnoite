#ifndef CALCULADORA_H
#define CALCULADORA_H

#ifdef _WIN32
    #define EXPORT __declspec(dllexport)
#else
    #define EXPORT
#endif
/**
 *
 * @param a Primero valor passado como argumento
 * @param b Segundo valor passado como argumento
 * @return Soma dos dois valroes
 */
EXPORT int somar(int a, int b);


EXPORT int subtrair(int a, int b);


EXPORT int multiplicar(int a, int b);

EXPORT int dividir(int a, int b);


#endif // CALCULADORA_H