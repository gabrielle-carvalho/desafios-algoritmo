//11 - Dizemos que um número natural n é palíndromo se o 1º algarismo de n é igual ao seu último algarismo, o 2º algarismo de n é igual ao penúltimo algarismo, e assim sucessivamente.
//Exemplos: o 567765 e 32423 são palíndromos. o 567675 não é palíndromo. Dado um número natural n > 10 , verificar se n é palíndrome. Palíndromos também podem ser identificados em strings. Exemplos: - REVIVER - ANA - ASA - OSSO - RADAR
#include <stdio.h>

int main() {
    char num[20]; // Definindo um tamanho máximo para o número, char porque fica melhor de separar cada caracter individualmente
    int tam, i;

    printf("Digite o número: ");
    scanf("%s", num); // Recebendo o número como uma string

    // Calculando o tamanho do número
    for (tam = 0; num[tam] != '\0'; tam++);
//tam é usada para contar o tamanho da string
//num[tam] != '\0';: Verifica se o caractere na posição atual (tam) do array num é diferente de nulo
//tam++: Incrementa o valor de tam após cada iteração do loop

    int meio = tam / 2; // Encontrando o ponto médio do número

    int palindromo = 1; // Variável para indicar se o número é um palíndromo ou não

    for (i = 0; i < meio; i++) {
        if (num[i] != num[tam - i - 1]) { //Ex: Se i for 1 e tam 5, num[tam - i - 1] será num[3], o penultimo valor
            palindromo = 0; // Se encontrarmos um par de dígitos diferentes, não é um palíndromo
            break;
        }
    }

    if (palindromo) {
        printf("\nEsse número é um palíndromo!\n");
    } else {
        printf("Esse número não é um palíndromo!\n");
    }

    return 0;
}
