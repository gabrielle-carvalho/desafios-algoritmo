//QUESTÃO 3 - Faça um programa que calcule o fatorial de um número informado pelo usuário. Obs: O fatorial de 0 é 1.
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
