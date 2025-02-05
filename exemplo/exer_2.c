//construa um programa que calcule: Quanto devemos cobrar em um projeto de programação se trabalhando 8h por dia,demoramos 15 dias para fazer o projeto e cobramos R$100./h

#include <stdio.h>
int main (){
    int dias,valor,horas;
    float Valor_total;
    
    printf("Informa quantidade horas trabalhado: ");
    scanf("%d",&horas);
    printf("Informa quantidade dias trabalhado: ");
    scanf("%d",&dias);

    printf("Digite o valor cobrado por horas: ");
    scanf("%d", &valor);

    Valor_total = dias * horas* valor;
    printf("O valor total eh %.2f: ",Valor_total);

    return 0;
}