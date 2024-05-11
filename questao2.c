//2 - Escrever um algoritmo que lê um conjunto de 4 valores i,a,b,c, onde i é um valor inteiro e positivo e a,b,c são quaisquer valores reais e os escreva. A seguir:
//Se i=1 escrever os 3 valores a, b,c em ordem crescente. Se i=2 escrever os 3 valores a,b,c em ordem decrescente. Se i=3 escrever os 3 valores de forma que o maior valor entre a,b,c fica entre os outros

#include <stdio.h>
 
int main () {
 
int i;
float a, b, c, menor, maior, meio;
menor=0;
maior=0;
meio=0;
 
printf("Digite 1, 2 ou 3: ");
scanf("%d",&i);
 
printf("Digite o primeiro valor: ");
scanf("%f",&a);
 
printf("Digite o segundo valor: ");
scanf("%f",&b);
 
printf("Digite o terceiro valor: ");
scanf("%f",&c);
 
    if(a<b && a<c){
        menor=a;
    }
    else{
        if(b<a && b<c){
        menor=b;
        }
    else{
        if(c<a && c<b){
        menor=c;
        }
    }
    }
    if(a>b && a>c){
        maior=a;
    }
    else{
        if(b>a && b>c){
        maior=b;
        }
    else{
        if(c>a && c>b){
        maior=c;
        }
    }
    }
        if(a!=maior && a!=menor){
            meio = a;
        }
    else{
        if(b!=maior && b!=menor){
            meio = b;
        }
        else{
        if(c!=maior && c!=menor){
            meio = c;
        }
        }
    }
 
    switch (i){
    case 1:
        printf("Os números em ordem crescente:  %f - %f - %f", menor, meio, maior);
        break;
    case 2:
        printf("Os números em ordem decrescente:  %f - %f - %f", maior, meio, menor);
        break;
    case 3:
        printf("Os números com o maior no meio:  %f - %f - %f", menor, maior, meio);
        break;
    
    default:
            printf("Opção inválida");
 
        break;
    }
}
