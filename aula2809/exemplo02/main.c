#include <stdio.h>
void descer(int teto) {
    if (teto == 0) return;
    printf("%d\n", teto);
    descer(teto - 1);
}
void subir(int teto) {
   if (teto == 0) return;
    subir(teto - 1);
    printf("%d\n", teto);
}
int main(void) {
    subir(15);
    descer(15);
    return 0;
}
