/*8 - Calcular o somatório das seguintes séries :
a) S = 1 + 1/3 + 1/5 + 1/7 + ............+ 1/99
b) S = 1 – 1/3 + 1/5 – 1/7 + .............para os primeiros 20 termos */
#include <stdio.h>

int main(){
    float somatorio = 0;

    for (float impar = 1; impar <= 99; impar+=2){
        somatorio += (1/impar);
    }

    printf("Resposta: %f\n", somatorio);
}
