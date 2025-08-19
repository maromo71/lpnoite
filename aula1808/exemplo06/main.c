#include <stdio.h>

int main(void)
{
    int i = 0;
    //Abortar na mao
    for (;;) { //laco sem fim - infinito
        i++;
        printf("%d ", i);
    }
    return 0;
}