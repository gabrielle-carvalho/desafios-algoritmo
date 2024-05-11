//QUESTÃO 5 - Dado um número natural na base binária, transformá-lo para a base decimal.
//Exemplo: Dado 10010 a saída será 18, pois 1. 2 4 + 0. 2 3 + 0. 2 2 + 1. 2 1 + 0. 2 0 = 18. 6 - Dado um número natural na base decimal, transformá-lo para a base binária. Exemplo: Dado 18 a saída deverá ser 10010.
#include <stdio.h>
#include <math.h>

int binParaDec(int n) {
    int decimal = 0, i = 0, remainder; 
    while (n != 0) {
     remainder = n % 10; //remainder é o resto
     n /= 10;
     decimal += remainder * pow(2, i); //pow calcula a potencia de 2
     ++i;
 }
     return decimal;
}

    int main() {
    int binario;
    printf("Digite um número binário: ");
    scanf("%d", &binario);
    printf("O número decimal correspondente é: %d", binParaDec(binario));
    return 0;
    }
