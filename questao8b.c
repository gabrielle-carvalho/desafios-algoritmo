//8 - Calcular o somatório das seguintes séries :
// b) S = 1 – 1/3 + 1/5 – 1/7 + .............para os primeiros 20 termos
#include <stdio.h>

int main(){
    float soma = 0;

    int sinal = 1;

    for (float impar = 1; impar <= 39; impar+=2){
        soma += sinal * (1/impar);
        sinal *= -1;
    }

    printf("Resposta: %f\n", soma);
}
