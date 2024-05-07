#include <stdio.h>

int main()
{
	int n;
	int cont;
	int soma;
	soma=0;


	printf("Informe 1 numero: ");
	scanf("%d", &n);
	cont=n;


	while(cont>0){
		n=n-1;
		cont=cont-1;
		soma = soma+n;
	}

	printf("Soma = %d", soma);
}
