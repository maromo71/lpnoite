#include <stdio.h>
#define TAM 3
int main(void) {
  char veia[TAM][TAM] = {
    {'X', 'O', 'X'},
    {'O', 'X', 'O'},
    {'X', 'O', 'O'}
  };
  for (int i=0; i<TAM; i++){ //percorrendo linha
    for (int j=0; j<TAM; j++){ //percorrendo a coluna na linha
      j==2? printf(" %-3c ", veia[i][j]): printf(" %-3c|", veia[i][j]);
    }
    printf("\n"); //pular uma linha
  }
}