/*Crie um programa que leia um número de 1 a 12 e imprima o nome do mês correspondente.*/
#include <stdio.h>

void imprimirMes(int mes){
    switch (mes)
    {
    case 1:
        printf("Janeiro");
        break;
    case 2:
       printf("Fevereiro");
       break;
    case 3:
        printf("Março");
        break;
    case 4:
        printf("Abril");
        break;
    case 5:
        printf("Mai");
        break;
    case 6:
        printf("Junho");
        break;
    case 7:
        printf("Julho");
        break;
    case 8:
        printf("agosto");
        break;
    case 9:
        printf("Setembro");
        break;
    case 10:
        printf("Octubro");
        break;
    case 11:
        printf("Novembro");
        break;
    case 12:
        printf("Desembro");
    default:
        printf("Informacoes invalido insira numero de 1 e 12 ");
        break;
    }
}

int main(){
    int mes;

    printf("Digite o mes: ");
    scanf("%d", &mes);

    imprimirMes(mes);

    return 0;
}