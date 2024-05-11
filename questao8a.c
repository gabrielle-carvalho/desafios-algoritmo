/*QUESTÃO 8 - Calcular o somatório das seguintes séries :
a) S = 1 + 1/3 + 1/5 + 1/7 + ............+ 1/99*/
#include <stdio.h>

int main(){
    float soma = 0;

    for (float impar = 1; impar <= 99; impar+=2){
        soma += (1/impar);
    }
    printf("sOMATÓRIO: %f\n", soma);
}
