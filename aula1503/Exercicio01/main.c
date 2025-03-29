#include <stdio.h>

int main(void) {
    float celcius;
    for (int fah = 0; fah<=100; fah++){
        celcius = (fah - 32) / 1.8;
        printf("Fah: %d ==> Celsius: %.2f\n", fah, celcius);
    }
    return 0;
}