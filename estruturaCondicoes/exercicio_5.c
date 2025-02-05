#include <stdio.h>

int main() {
    float salario,aumento,percentual,salarioNovo;
    
    printf("Informe salario atual do foncionario: ");
    scanf("%f",&salario);
    printf("Informe percentual de aumento: ");
    scanf("%f",&percentual);
    
    aumento = salario * percentual / 100 ;
    salarioNovo = salario + aumento;
    
    printf("\nO aumento de funcionario foi de : %.2f",aumento);
    printf("\nO salario funcionario foi de %.2f", salarioNovo);

    return 0;
}