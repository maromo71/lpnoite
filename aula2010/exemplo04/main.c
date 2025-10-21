#include <stdio.h>
int strlen(char *p_s);
int main(void) {
    char str[51];
    printf("Digite uma string \n");
    gets(str);
    printf("Tam: %d caracteres\n", strlen(str));
    return 0;
}
int strlen(char *p_s) {
    char *p_ini = p_s;
    while (*p_s != '\0') p_s++;
    return p_s - p_ini;
}