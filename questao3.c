// QUESTÃO 2 - Escrever um algoritmo que lê um conjunto de 4 valores i,a,b,c, onde i é um valor inteiro e positivo e a,b,c são quaisquer valores reais e os escreva. A seguir:
//Se i=1 escrever os 3 valores a, b,c em ordem crescente. Se i=2 escrever os 3 valores a,b,c em ordem decrescente. Se i=3 escrever os 3 valores de forma que o maior valor entre a,b,c fica entre os outros
#include <stdio.h>

int main()
{
    int valor, resultado;
    resultado = 1;
    printf("Digite um valor para encontrar seu resultado fatorial: ");
    scanf("%d", &valor);

    for(int i = 1;i <= valor;){
        resultado = resultado * i;
        i++;
    }
    printf("\nValor do fatorial do número %d: %d", valor, resultado);
}
