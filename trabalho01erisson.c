
#include <stdio.h>

int main() {

  // declarando variáveis iniciais globais
  int d, c, a;
  float b;
  float b1, b2, b3; // declarando variáveis independentes
  int x;

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
    // não esquecer de colocar os valores em float, tipo '3.0' e tal
    b1 = (((5 * 3.0) / 100.0) * b);

    // declarando a variável
    x = (c / 6);

    // condição de no máximo 7 benefícios de 7%
    if (x <= 7) {
      b2 = (((x * 7.0) / 100.0) * b);

      // condição se o ano é bissexto
      if (a % 4 == 0) {

        b3 = ((1.0 / 100.0) * b);
        printf("Seu salário total será: %2.f\n", b + b1 + b2 + b3);

      } else {
        printf("Seu salário total será: %2.f\n", b + b1 + b2);
      }
    }
    //----------------------------------------------------
  } else {

    // CONDIÇÃO 1: bloco de calculo de 1 a 3 dependentes
    if (d < 4 || d == 0) {

      // não esquecer de colocar os valores em float, tipo '3.0' e tal
      b1 = (((d * 3.0) / 100.0) * b);

      // declarando a variável
      x = (c / 5);

      // condição de no máximo 6 benefícios de 4%
      if (x <= 6) {
        b2 = (((x * 4.0) / 100.0) * b);

        // condição se o ano é bissexto
        if (a % 4 == 0) {

          b3 = ((1.0 / 100.0) * b);
          printf("Seu salário total será: %2.f\n", b + b1 + b2 + b3);

        } else {
          printf("Seu salário total será: %2.f\n", b + b1 + b2);
        }
      } else { // condição para x>6 benefícios
        b2 = (((6 * 4.0) / 100.0) * b);
        if (a % 4 == 0) {

          b3 = ((1.0 / 100.0) * b);
          printf("Seu salário total será: %2.f\n", b + b1 + b2 + b3);

        } else {
          printf("Seu salário total será: %2.f\n", b + b1 + b2);
        }
      }

      // CONDIÇÃO 2: bloco de calculo de 4 a 5 dependentes
    } else {

      // condição de acréscimo de 3% por filho
      //  não esquecer de colocar os valores em float, tipo '3.0' e tal
      b1 = (((d * 3.0) / 100.0) * b);

      // declarando a variável
      x = (c / 6);

      // condição de no máximo 7 benefícios de 7%
      if (x <= 7) {
        b2 = (((x * 7.0) / 100.0) * b);

        // condição se o ano é bissexto
        if (a % 4 == 0) {

          b3 = ((1.0 / 100.0) * b);
          printf("Seu salário total será: %2.f\n", b + b1 + b2 + b3);

        } else {
          printf("Seu salário total será: %2.f\n", b + b1 + b2);
        }
      } else {
        b2 = (((7 * 7.0) / 100.0) * b);

        if (a % 4 == 0) {
          b3 = ((1.0 / 100.0) * b);
          printf("Seu salário total será: %2.f\n", b + b1 + b2 + b3);

        } else {
          printf("Seu salário total será: %2.f\n", b + b1 + b2);
        }
      }
    }
  }
}