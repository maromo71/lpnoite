#include <stdio.h>

int main(void) {
    for(int i=1;;i++){
        printf("%d\n", i);
        if(i % 777==0 && i % 2 ==0) break;
    }
    return 0;
}
