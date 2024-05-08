#include <stdio.h>

int perfeito(int num) {
    int soma = 0;
    
    // Encontra os divisores do número
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            soma += i;
        }
    }
    
    // Verifica se a soma dos divisores é igual ao número original
    if (soma == num) {
        return 1; // Retorna verdadeiro se for perfeito
    } else {
        return 0; // Retorna falso se não for perfeito
    }
}

int main() {
    int numero;
    
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);
    
    // Verifica se o número é perfeito e imprime o resultado
    if (perfeito(numero)) {
        printf("%d é um número perfeito.\n", numero);
    } else {
        printf("%d não é um número perfeito.\n", numero);
    }
    
    return 0;
}
