#include <stdio.h>

int main () {

int i;
float a, b, c, menor, maior;
menor=0;
maior=0;

printf("Digite 1, 2 ou 3: ");
scanf("%d",&i);

printf("Digite o primeiro valor: ");
scanf("%f",&a);

printf("Digite o segundo valor: ");
scanf("%f",&b);

printf("Digite o terceiro valor: ");
scanf("%f",&c);

if(i=1){
    if(a<menor){
        a=menor;
    }else{
        if(b<menor){
        b=menor;
    }else{
        if(c<menor){
        c=menor;
    }
    }
    }
}


    if(a>maior){
        a=maior;
    }else{
        if(b>maior){
        b=maior;
    }else{
        if(c>maior){
        c=maior;
    }
    }
    }

    if (i=1){
        printf("Os números em ordem crescente: %.2f", menor, maior);
    }



}
