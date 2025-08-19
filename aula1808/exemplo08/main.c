#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 10; i++) {
        printf("Tabuada do %2d\n", i);
        for (int j = 1; j <= 10; j++) {
            int r = i * j;
            printf("%2d X %2d = %3d\n", i, j, r);
        }
        printf("=-=-=-=-=-=-=\n");
    }
    return 0;
}