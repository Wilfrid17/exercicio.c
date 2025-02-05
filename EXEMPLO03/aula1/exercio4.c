#include <stdio.h>


int main () {
    float valor_total_devido, percentual,multa,valorTotal;
    int qtd_dia_atraso;

    printf("\nINFORME O VALOR DE VIDO: ");
    scanf("%f",&valor_total_devido);

    printf("\nINFORMA QTD DE DIA ATRASADO:  ");
    scanf("%d",&qtd_dia_atraso);

    printf("\nINFORME PERCENTUAL DEVIDO: ");
    scanf("%f",&percentual);

    multa = (valor_total_devido *percentual / 100) * qtd_dia_atraso;
    valorTotal = valor_total_devido + multa;

    printf("O valor de vindo encluindo a multa eh: %.2f", valorTotal);

    return 0;

}