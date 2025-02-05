#include <stdio.h>

int main () {
  float salario_atual,aumento,salarioNovo;

  printf("Digite o salario atual: ");
  scanf("%f",&salario_atual);

  if(salario_atual < 0.0) {
    printf("O salario nao deve ser negativo");
  }
  else if ((salario_atual >= 0.0) && (salario_atual <= 1400.00)) {
    aumento = 0.15;
  }
  else if ((salario_atual >= 1400.1) && (salario_atual <= 2000.0)) {
    aumento = 0.12;
  }
  else if ((salario_atual >= 2000.01) && (salario_atual <= 3000.00))
  {
    aumento = 0.10;
  }
  else if ((salario_atual >= 3000.01) && (salario_atual <= 3800.00))
  {
    aumento = 0.07;
  }
  else if ((salario_atual >= 3800.01) && (salario_atual <= 5000.00))
  {
    aumento = 0.4;

  }
  else if (salario_atual >= 5000.00)
  {
    aumento = 0.0;
  }

  salarioNovo = salario_atual + (salario_atual* aumento);
 
 

  printf("\n O percentual do aumento foi de:  %.2f", aumento);
  printf("\nSalario corrido foi de : %.2f", salarioNovo);

  return 0;
    
}