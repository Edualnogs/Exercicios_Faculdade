#include <stdio.h>

int main() {

  int idade = 0;
  float altura = 0.0;
  char nome[30] = "";

  printf("Digite sua idade:\n");
  scanf("%d", &idade);

  printf("Digite sua altura:\n");
  scanf("%f", &altura);

  printf("Digite seu nome:\n");
  scanf("%s", &nome);

  printf("Bem-vindo, %s, sua altura é %.2f e sua idade %d\n", nome, altura,
         idade);
}