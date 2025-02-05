#include <stdio.h>
//
int main (){
    int dias;
     
     printf("Digite um numero de [1-7]: ");
     scanf("%d",&dias);

    switch (dias) {
    case 1:
        printf("Segunda-feira");
        break;
    case 2:
       printf("Terça-feira");
       break;
    case 3:
       printf("Quarta-feira");
       break;
    case 4:
       printf("Quinta-feira");
       break;
    case 5:
       printf("Sexta-feira");
       break;
    case 6:
       printf("Sabado");
       break;
    case 7:
       printf("Domingo");
       break;
    default:
       printf("Dias nao encontrado no intervalo: ");
        break;
    }
}