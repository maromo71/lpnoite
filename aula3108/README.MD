# Desafio
## Sugestões para ajuda

### Entradas Sugeridas:
- Número de populações (N): 3
- Limite superior de iterações (L): 30
Ciclos de vida das populações:
- População 1: 6 anos
- População 2: 10 anos
- População 3: 15 anos

### Explicação das Entradas:
População 1 com ciclo de 6 anos:
- Esta população emerge a cada 6 anos.
População 2 com ciclo de 10 anos:
- Esta população emerge a cada 10 anos.
População 3 com ciclo de 15 anos:
- Esta população emerge a cada 15 anos.

### Cálculo do MMC:
MMC(6, 10) = 30:
- O MMC dos primeiros dois ciclos (6 e 10) é 30. Isso significa que, sem considerar a terceira população, essas duas primeiras populações emergirão simultaneamente a cada 30 anos.

MMC(30, 15) = 30:
- Quando incluímos a terceira população com ciclo de 15 anos, o MMC continua sendo 30. Ou seja, todas as três populações irão emergir simultaneamente a cada 30 anos.

### Limite de Iteração (L = 30):
O limite superior de iterações é 30, então o ciclo extra deve ser calculado de forma a maximizar o período até que todas as populações coincidam, mas sem exceder 30.
### Cálculo do Ciclo Extra:
Agora, vamos procurar um ciclo extra T que maximize o MMC de todas as populações, incluindo o ciclo extra, mas que não exceda 30.

##### Testando T = 1 a T = 30:

- Como o MMC atual já é 30 (e é igual ao limite), qualquer valor de T entre 1 e 30, que resulte em MMC de 30, pode ser considerado. No entanto, o valor mais pequeno possível para T que dá esse resultado é T = 1.
### Resultado Esperado:
O melhor período para a população extra é T = 1.
Isso ocorre porque, com qualquer outro valor, o MMC ainda seria 30, mas queremos o menor valor de T que maximiza o período até que todos os ciclos coincidam. Assim, o programa escolheria T = 1.

### Resumo:
Portanto, ao fornecer essas entradas no programa:
- Número de populações: 3
- Limite superior de iterações: 30
- Ciclos de vida: 6, 10, 15
**O programa deve retornar 1 como o melhor período para a população extra.**