#include <stdio.h>

int main() {

  float soma = 0.0;
  int i, x;

  printf("Quantos dados terão? ");
  scanf("%d", &x);

  float v[x];
  for (i = 0; i < x; i++) {
    printf("Insira um dado: \n");
    scanf("%f", &v[i]);
  }
  for (i = 0; i < x; i++) {
    soma += v[i];
  }
  float media = (soma / (x));
  printf("A média dos valores é:%0.2f\n", media);
}
