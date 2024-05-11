//QUESTÃO 4 – Faça um programa que leia um valor numérico. O programa deve ser capaz de somar todos os números anteriores ao valor informado.
//Ex. valor = 3, deve ser calculado 0+1+2 = 3 Valor = 5, deve ser calculado 0+1+2+3+4 = 10
#include <stdio.h>

int main()
{
	int n;
	int cont;
	int soma;
	soma=0;

	printf("Informe 1 número: ");
	scanf("%d", &n);
	cont=n;

	while(cont>0){
		n=n-1;
		cont=cont-1;
		soma = soma+n;
	}

	printf("Soma dos números anteriores ao digitado: %d", soma);
}
