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
     habitantesB=habitantesB*1.15;
     anos++;
     }
     printf("Com as taxas, o país A conseguirá se igualar ou ultrapassar o B em %d", anos);

}
