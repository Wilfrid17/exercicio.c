//exercicio de restrutura  de repetição
#include <stdio.h>
int main () {
    float salario, aumento;
    int anos = 0;


    printf("Informa seu salario: ");
    scanf("%f", &salario);
    
    printf("Informa seu aumento: ");
    scanf("%f", &aumento);


    while ( salario < 100000.00)
    {
        salario += salario * (aumento/100);
        anos++;
    }
    printf("Voce levar %d anos para ganha 1.000.000.00 de Reais\n: ",anos);
    //printf("O seu salario atualizado eh: %.2f\n ", salario);

return 0;
}