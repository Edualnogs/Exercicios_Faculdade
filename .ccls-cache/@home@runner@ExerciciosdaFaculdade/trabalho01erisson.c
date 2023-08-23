
#include <stdio.h>

int main() {

  // declarando variáveis iniciais globais
  int d, c, a;
  float b;

  printf("--------------------\n");
  printf("| CÁLCULO SALARIAL |\n");
  printf("--------------------\n");

  printf("Esse programa calcula seu salário final -->\n\n");

  printf("Qual é seu salário base? ");
  scanf("%f", &b);

  printf("Quantos dependentes você têm? ");
  scanf("%d", &d);

  printf("Há quantos anos você está na firma? ");
  scanf("%d", &c);

  printf("Em que ano você está? ");
  scanf("%d", &a);

  printf("\n\n----------------------------------------------\n\n");

  // condição de no máximo 5 dependentes
  if (d > 5) {
    printf("Tem que ser no máximo 5 dependentes!\n");

  } else {

    // CONDIÇÃO 1: bloco de calculo de 1 a 3 dependentes
    if (d >= 1 && d < 4) {

      // declarando variáveis independentes
      float b1, b2, b3, b4;

      // não esquecer de colocar os valores em float, tipo '3.0' e tal
      b1 = (((d * 3.0) / 100.0) * b);

      // declarando a variável
      int x;
      x = (c / 5);

      // condição de no máximo 6 benefícios de 4%
      if (x >= 1 && x <= 6) {
        b2 = (((x * 4.0) / 100.0) * b);

        // condição se o ano é bissexto
        if (a % 4 == 0) {

          b3 = ((1.0 / 100.0) * b);
          printf("Seu salário total será: %2.f\n", b + b1 + b2 + b3);

        } else {
          printf("Seu salário total será: %2.f\n", b + b1 + b2);
        }
      }

      // CONDIÇÃO 2: bloco de calculo de 4 a 5 dependentes
    } else {
      // declarando variáveis independentes
      float b12, b22, b32, b42;

      // condição de acréscimo de 3% por filho
      //  não esquecer de colocar os valores em float, tipo '3.0' e tal
      b12 = (((d * 3.0) / 100.0) * b);

      // declarando a variável
      int x;
      x = (c / 6);

      // condição de no máximo 7 benefícios de 7%
      if (x >= 1 && x <= 7) {
        b22 = (((x * 7.0) / 100.0) * b);

        // condição se o ano é bissexto
        if (a % 4 == 0) {

          b32 = ((1.0 / 100.0) * b);
          printf("Seu salário total será: %2.f\n", b + b12 + b22 + b32);

        } else {
          printf("Seu salário total será: %2.f\n", b + b12 + b22);
        }
      }
    }
  }
}
