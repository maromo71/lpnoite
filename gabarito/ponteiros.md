
```c

int main(){
    int x = 10;
    double valor = 34.5;
    printf("%d\n", x);
    printf("%lf\n", valor);
    int *p_x = &x; //&x --> endereco de x na memoria
    printf("%d\n", *p_x);
    *p_x = 15;
    printf("%d\n", x); //o valor 15, novo valor de x.
}

