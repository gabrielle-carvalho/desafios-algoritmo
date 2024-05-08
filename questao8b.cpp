#include <stdio.h>

int main(){
    float somatorio = 0;

    int sinal = 1;

    for (float impar = 1; impar <= 39; impar+=2){
        somatorio += sinal * (1/impar);
        sinal *= -1;
    }

    printf("Resposta: %f\n", somatorio);
}
