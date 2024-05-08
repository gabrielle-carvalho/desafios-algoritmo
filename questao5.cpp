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
