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
