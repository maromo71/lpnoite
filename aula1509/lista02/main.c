#include <stdio.h>
#include <string.h>

int main(void) {
    char secreta[] = "maracatu";
    char composta[21] = "________";
    char letra;
    for (int i=0; i<6; i++) {
        fflush(stdin);
        printf("Digite a Letra:\n");
        scanf("%c", &letra);
        int p = 0;
        while (secreta[p] != '\0') {
            if (letra == secreta[p]) {
                composta[p] = letra;
            }
            p++;
        }
        printf("Rodada: %d = %s \n",i+1, composta);
    }
    return 0;
}
