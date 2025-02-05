#include <stdio.h>

int main () {
    float salario_atual,porcentual_aumento,valor_aumento,salario_novo;

    printf("Infome seu salario atual:  ");
    scanf("%f", &salario_atual);
    printf("Informe percentual de aumento: ");
    scanf("%f",&porcentual_aumento);

     porcentual_aumento = porcentual_aumento / 100;
     valor_aumento = salario_atual * porcentual_aumento;
     salario_novo = salario_atual  + valor_aumento;

     printf("\nO valor aumento funcionario %f", valor_aumento);
     printf("\nO salario novo e %f", salario_novo);
    
}