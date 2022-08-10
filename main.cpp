#include <iostream>
#include <stdlib.h>
#include <string.h>

int main() {
  std::cout << "Hello World!\n";
  // Declarando variáveis:
  int idade;
  float altura;
  char nome[10];

  // Programa:
  // printf("Digite a sua idade:");
  // scanf("%2d", &idade);
  // printf("Sua idade: %d", idade);
  // printf("\n");

  // printf("Digite sua altura:");
  // scanf("%5f", &altura);
  // printf("Sua altura: %3.2f", altura);
  // printf("\n");

  // Observação: Apenas realizar operações com variáveis do mesmo tipo
  // uma vez que ao utilizar dois tipos diferentes o resultado pode não
  // ser do tipo primitivo esperado. (Ex: dividir 3/2.0)
  // no exemplo, 3 int por 2.0 float resulta em quociente 1.5 e resto 0
  // tornando o quociente em uma variável float

  printf("Digite a sua idade e a sua altura: ");
  scanf("%3d %5f", &idade, &altura);

  printf("Digite um nome: ");
  scanf("%s", nome);

  printf("Seu nome: %s \nSua idade: %d \nSua altura: %3.2f", nome, idade,
         altura);
  printf("\n");

  // Retorno:
  return 0;
}