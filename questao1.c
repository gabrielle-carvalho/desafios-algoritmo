// QUESTÃO 1 - Escrever um algoritmo que leia 3 valores a,b,c. Calcule e escreve a média ponderada com pesos = 5 para números acima de 6 e peso = 2,5 para números abaixo de 6.

#include <stdio.h>

main()
{
	float a,b,c,pesoA, pesoB, pesoC, media;

	printf("Informe o valor a \n");
	scanf("%f",&a);
	
	printf("Informe o valor b \n");
	scanf("%f",&b);
	
	printf("Informe o valor c \n");
	scanf("%f",&c);

	if(a<=6){
	    pesoA = 5;
	}
	else{
	    pesoA = 2,5;
	}
	if(a<=6){
	    pesoB = 5;
	}
	else{
	    pesoB = 2,5;
	}
	if(a<=6){
	    pesoC = 5;
	}
	else{
	    pesoC = 2,5;
	}
	media = ((a*pesoA)+(b*pesoB)+(c*pesoC))/ (pesoA+pesoB+pesoC);	
	printf("A média é igual a: %.2f", media);
}
