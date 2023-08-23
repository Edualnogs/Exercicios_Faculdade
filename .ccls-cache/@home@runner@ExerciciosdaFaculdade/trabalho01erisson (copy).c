#include <stdio.h>

int main() {

  int d, c, a;
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

  if (d >= 1 && d <= 4) {

    b1 = ((d * (3 / 100)) * b);

    int x;
    x = (c / 5);

    if (x >= 1 && x <= 6) {
      b2 = ((x * (4 / 100)) * b);

      if (a % 4 == 0) {
        b3 = ((1 / 100) * b);
        printf("Seu salário total é: %2.f", b + b1 + b2 + b3);
      } else {
        printf("Seu salário total é: %2.f", b1);
      }
    }
  }
}