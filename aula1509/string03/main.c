#include <stdio.h>
#include <string.h>

int main(void) {
    char p1[21] = "Fatec Mogi Mirim";
    char p2[21] = "fatec mogi mirim";
   // strupr(p1);
    //strupr(p2);
    if (strcasecmp(p1, p2) == 0) {
        printf("Frase igual\n");
    }else {
        printf("Frase diferente\n");
    }
    printf("Frase: %s\n", p1);
    return 0;
}
