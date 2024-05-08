#include <stdio.h>

int main() {
    float massa_inicial, massa_restante;
    int horas = 0, minutos = 0, segundos = 0;

    // Solicita a entrada da massa inicial
    printf("Digite a massa inicial em gramas: ");
    scanf("%f", &massa_inicial);

    massa_restante = massa_inicial;

    while (massa_restante >= 0.5) {
        // Calcula a nova massa após 50 segundos
        massa_restante /= 2;

        // Atualiza o tempo decorrido
        segundos += 50;

        // Ajusta os segundos para minutos e horas
        if (segundos >= 60) {
            minutos += segundos / 60;
            segundos %= 60;
        }
        if (minutos >= 60) {
            horas += minutos / 60;
            minutos %= 60;
        }
    }

    printf("\nMassa inicial: %.2f gramas\n", massa_inicial);
    printf("Massa final: %.2f gramas\n", massa_restante);
    printf("Tempo necessário: %d horas, %d minutos e %d segundos\n", horas, minutos, segundos);

    return 0;
}
