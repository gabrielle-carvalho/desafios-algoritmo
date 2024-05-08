#include<stdio.h>

int main() {
    // Declaração de variáveis
    char nome[50];
    char sexo;
    float altura, maior_altura = 0, menor_altura = 1000;
    float soma_altura_mulheres = 0, soma_altura_turma = 0;
    int total_mulheres = 0, total_pessoas = 0;

    for (int i = 0; i < 50; i++) {
        printf("Digite o nome da pessoa %d: ", i+1);
        scanf("%s", nome);
        
        printf("Digite o sexo da pessoa %s (M/F): ", nome);
        scanf(" %c", &sexo);
        
        printf("Digite a altura da pessoa %s: ", nome);
        scanf("%f", &altura);

        // Atualiza a maior e a menor altura
        if (altura > maior_altura) {
            maior_altura = altura;
        }
        if (altura < menor_altura) {
            menor_altura = altura;
        }

        // Verifica se é mulher e atualiza os dados para o cálculo da média de altura das mulheres
        if (sexo == 'F' || sexo == 'f') {
            soma_altura_mulheres += altura;
            total_mulheres++;
        }

        // Atualiza os dados para o cálculo da média de altura da turma
        soma_altura_turma += altura;
        total_pessoas++;
    }

    // Calcula a média de altura das mulheres
    float media_altura_mulheres = soma_altura_mulheres / total_mulheres;

    // Calcula a média de altura da turma
    float media_altura_turma = soma_altura_turma / total_pessoas;

    // Imprime os resultados
    printf("\nMaior altura da turma: %.2f\n", maior_altura);
    printf("Menor altura da turma: %.2f\n", menor_altura);
    printf("Média de altura das mulheres: %.2f\n", media_altura_mulheres);
    printf("Média de altura da turma: %.2f\n", media_altura_turma);

    return 0;
}
