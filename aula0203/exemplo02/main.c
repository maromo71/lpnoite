#include <stdio.h>

int main(void) {
    int nums[10] = {0};

    for (int i = 0; i < 10; i++) {
        printf("[%3d] ", nums[i]);
    }
    printf("\n");
    return 0;
}