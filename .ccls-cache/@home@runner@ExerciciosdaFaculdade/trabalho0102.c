
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

  switch (d) {
    case (0):
      x = (c / 5);

      // condição de no máximo 6 benefícios de 4%
      if (x <= 6) {
        b2 = (((x * 4.0) / 100.0) * b);

        // condição se o ano é bissexto
        if (a % 4 == 0) {

          b3 = ((1.0 / 100.0) * b);
          printf("Seu salário total será: %2.f\n", b + b1 + b2 + b3);
        }else {
          printf("Seu salário total será: %2.f\n", b + b1 + b2);
        }
      }
    case (4):
      b1 = (((d * 3.0) / 100.0) * b);

        // declarando a variável
        int x;
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
  }
}