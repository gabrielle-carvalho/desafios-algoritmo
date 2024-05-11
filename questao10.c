//10 - Dados n e uma seqüência de n números inteiros, determinar o comprimento de um segmento crescente de comprimento máximo.
//Exemplos: Na seqüência 5, 10, 3, 2, 4, 7, 9, 8, 5 o comprimento do segmento crescente máximo é 4. Na seqüência 10, 8, 7, 5, 2 o comprimento de um segmento crescente máximo é 1.
#include <stdio.h>

int main() {
  int n, i;

  printf("Digite o tamanho da sequência: ");
  scanf("%d", &n);

  //Array pra armazenar a sequência
  int sequencia[n];

  printf("Digite os elementos da sequência:\n");
  for (i = 0; i < n; i++) {
    scanf("%d", &sequencia[i]);
  }

  int comprimentoAtual = 1;      // Comprimento do segmento crescente atual
  int comprimentoMaximo = 1;     // Comprimento do maior segmento crescente encontrado
  int inicioMaximo = 0;         // Índice do primeiro elemento do maior segmento crescente

  for (i = 1; i < n; i++) {
    // Verifica se o elemento atual é maior que o anterior (crescente)
    if (sequencia[i] > sequencia[i - 1]) {
      comprimentoAtual++; // Se for crescente, aumentar o comprimentoAtual
    } else {
      // Se não for crescente, verificar se o comprimentoAtual é maior que o comprimentoMaximo
      if (comprimentoAtual > comprimentoMaximo) {
        comprimentoMaximo = comprimentoAtual; 
        inicioMaximo = i - comprimentoMaximo; //guarda o índice de início do novo segmento máximo
      }
      comprimentoAtual = 1; //reiniciar o comprimentoAtual
    }
  }

  if (comprimentoAtual > comprimentoMaximo) {
    comprimentoMaximo = comprimentoAtual;
    inicioMaximo = i - comprimentoMaximo;
  }
  printf("Comprimento do segmento crescente máximo: %d\n", comprimentoMaximo);

  printf("Segmento crescente máximo:\n");
  for (i = inicioMaximo; i < inicioMaximo + comprimentoMaximo; i++) {
    printf("%d ", sequencia[i]);
  }
  printf("\n");

  return 0;
}
