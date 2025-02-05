/*Escreva um programa que leia dois números inteiros A e B do
teclado e imprima as mensagens “nulo”, “sinal negativo” ou “sinal positivo”,
conforme o resultado da multiplicação de A por B.
*/
#include <stdio.h>

int main () {

int numeroA,numeroB, result;

printf("Digite um numero: ");
scanf("%d", &numeroA);
printf("Digite um outro numero: ");
scanf("%d", &numeroB);

result = numeroA * numeroB;


if (result < 0)
{
    printf("Sinal negativo: ");
}
else if (result > 0)
{
    printf("Sinal positivo ");
}
else {
    printf("Nulo");
}

return 0;
}