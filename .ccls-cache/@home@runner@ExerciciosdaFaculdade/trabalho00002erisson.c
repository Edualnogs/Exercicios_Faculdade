#include <stdio.h>

int main() {

  int d, c, a, x;
  float b;
  float b1, b2, b3, b4;

  printf("Esse programa calcula seu salário final\n\n");

  printf("Qual é seu salário base? ");
  scanf("%f", &b);

  printf("Quantos dependentes você têm? ");
  scanf("%d", &d);

  printf("Há quantos anos você está na firma? ");
  scanf("%d", &c);

  printf("Em que ano você está? ");
  scanf("%d", &a);

  // fórmulas
  x = (c / 5);
  b1 = (((d * 3) / 100) * b);
  b2 = ((((x * 4) / 100)) * b);
  b3 = ((1 / 100) * b);

  printf("%2.f", b1);
  // if (d >= 1 && d <= 4) {

  // printf("%2.f", b1);

  // if (x >= 1 && x <= 6) {

  // if (a % 4 == 0) {

  // printf("Seu salário total é: %2.f", b + b1 + b2 + b3);
}
//else {
  // printf("Seu salário total é: %2.f", b1);
}
}
}
}