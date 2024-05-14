//QUESTÃO 12 - Supondo que a população de um país “A” seja da ordem de 90.000.000 de habitantes, com taxa anual de crescimento de 3%, e que a população de um país “B” seja, aproximadamente 200.000.000 de habitantes com taxa anual de crescimento de 1,5%.
//Faça um algoritmo que calcule e escreva o número de anos necessários para que a população do país “A” Ultrapasse ou iguale a população do país “B”, mantidas essas taxas de crescimento.
#include <stdio.h>

int main()
{
    int habitantesA, habitantesB;
    int anos;
    habitantesA=90000000;
    habitantesB=200000000;
    anos=0;

    while(habitantesA<=habitantesB){
     habitantesA=habitantesA*1.03;
     habitantesB=habitantesB*1.015;
     anos++;
     }
     printf("Com as taxas, o país A conseguirá se igualar ou ultrapassar o B em %d", anos);

}
