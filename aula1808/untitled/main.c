#include <stdio.h>

int main(void)
{
    float celsius, fahrenheit;
    for (fahrenheit = 0; fahrenheit <= 100; fahrenheit++) {
        celsius = fahrenheit - 32.0 / 1.8;
        printf("%.2f farh ==> %.2f celsius\n", fahrenheit, celsius);
    }
    return 0;
}