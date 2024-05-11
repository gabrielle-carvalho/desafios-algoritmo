//QUESTÃO 6 - Dado um número natural na base decimal, transformá-lo para a base binária. Exemplo: Dado 18 a saída deverá ser 10010.
#include <stdio.h>

void decimalParaBinario(int decimal) {
    if (decimal == 0) {
        printf("0");
        return;
    }

    int binario[32]; // Para armazenar o número binário, assumindo um máximo de 32 bits.
    int i = 0;

    while (decimal > 0) {
        binario[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    // Imprimindo o número binário em ordem reversa.
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
}

int main() {
    int numeroDecimal;
    printf("Digite um número decimal: ");
    scanf("%d", &numeroDecimal);

    printf("O número binário correspondente é: ");
    decimalParaBinario(numeroDecimal);
    printf("\n");

    return 0;
}
