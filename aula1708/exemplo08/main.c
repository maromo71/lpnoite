#include <stdio.h>

int main(void) {
    //exemplo do continue
    for(int i=1; i<=100; i++){
        if(i % 2 ==1)continue;
        printf("Valor é par: %d \n", i);
    }
    return 0;
}
