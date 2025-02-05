/*Elaborar um programa que apresente como resultado um número positivo, mesmo que a entrada
tenha sido feita com um valor negativo. Use um procedimento com passagem de valor por
referência*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void transFormaNumeroPositivo(int *numero){
    if(*numero < 0){
        *numero = abs(*numero);
    }
}

int main(){
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
   transFormaNumeroPositivo(&numero);
   printf("O numero positivo eh: %d\n", numero);

    return 0;
}