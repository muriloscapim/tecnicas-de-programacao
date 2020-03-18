// Calcular a média ponderada
#include <stdio.h>
#include <stdlib.h>

int main() {
  float nota1, nota2, peso1 = 4.0, peso2 = 6.0, media;

  printf("Digite a nota 1: ");
  scanf("%f",&nota1);
  printf("Digite a nota 2: ");
  scanf("%f",&nota2);

  media = (nota1 * peso1 + nota2 * peso2) / (peso1 + peso2);
  printf("A media ponderada e: %.2f",media);
  return 0;
}