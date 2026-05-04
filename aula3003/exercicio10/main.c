#include <stdio.h>
void fazRetangulo(char c, int b, int h);


int main() {
    //Simbolo:
    //Base: b = 5
    //Altura: h = 4
    fazRetangulo('#', 5, 5);
    return 0;
}

void fazRetangulo(char c, int b, int h) {
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= b; j++) {
            if (i == 1 || i == h  || j == 1 || j == b) {
                printf("%c", c);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}
