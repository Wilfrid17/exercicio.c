#include <stdio.h>
#include <string.h>


int main(){
  int idade;
  float salario, altura;
  char genero;
  char nome [50];

  idade = 30;
  salario = 4954.5;
  altura = 1.67;
  genero = 'M';
  strcpy(nome, "Wilfrid Senatus");

  printf("IDADE = %d\n", idade);
  printf("SALARIO = %.2lf\n", salario);
  printf("ALTURA = %.2lf\n", altura);
  printf("GENERO = %c\n", genero);
  printf("NOME = %s\n", nome);

  return 0;
}