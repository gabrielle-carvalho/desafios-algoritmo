#include <stdio.h>
#include <stdlib.h>

int main()
{
    int proximo, anterior, atual;

    anterior = 0;
    atual = 0;

    printf("Quantos números você gostaria da sequencia de fibonacci? \n");
    printf("Sequencia de fibonacci \n");

    for(int cont = 0; cont <= 15; ){

        if (cont == 1)
            atual = 1;
        proximo = anterior + atual;
        printf("%d + %d = %d \n", atual, anterior, proximo);
        anterior = atual;
        atual = proximo;
        cont++;

    }

    return 0;
}
