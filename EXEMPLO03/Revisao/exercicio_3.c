/*Leia 2 valores inteiros (A e B). Após, o programa deve mostrar
uma mensagem "Sao Multiplos" ou "Nao sao Multiplos", indicando se os
valores lidos são múltiplos entre si.*/

#include <stdio.h>

int main () {
    int valorA,valorB, result;
    printf("Digite Valor - A: ");
    scanf("%d", &valorA);

    printf("Digite Valor  - B: ");
    scanf("%d", &valorB);

   if(valorA > valorB){
    result = valorA % valorB;
   }
   else {
    result = valorB % valorA;
   }

   if (result == 0)
   {
    printf("Sao Multiplo");
   }
   else {
    printf("Nao sao Multiplos");
   }

   return 0;
}