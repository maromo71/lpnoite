#include <stdio.h>
#define T 4 //ao inves de informado pelo usuario
int main(void) {
    int matriz[T][T];

    for (int i = 0; i < T; ++i) {
        for (int j = 0; j < T; ++j) {
            if ( (i+j) % 2 == 0) {
                matriz[i][j] = 1;
            }else {
                matriz[i][j] = 0;
            }
        }
    }
    printf("Matriz \n");
    for (int i = 0; i < T; ++i) {
        for (int j = 0; j < T; ++j) {
            printf("[%2d]", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
