#include <stdio.h>
#include <stdlib.h>
int main(){
    int n = 983; //Na pratica sera adicionado o ultimo valor
    int x = 3; //Valor inicial de x
    for(int i=0; i<3; i++){
        x+= n % 10; //Adiciona o ultimo digito ao valor de x em cada passagem
    }
    printf("Valor de X: %d\n", x);//Restulta 12. pois 3 do x, adicionado a 3 em 3 passagens, resulta em 12
    return 0;
}
