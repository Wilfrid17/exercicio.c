/*fazer um programa para ler dois numero valores inteiros, e depois mostra na tela o valor da soma destes numeros.*/
#include <stdio.h>
int main (){
    int x,y;
    float soma = 0;

    printf("\nInformar valor de X: ");
    scanf("%d", &x);

    printf("Infomar valor de Y: ");
    scanf("%d", &y);

    soma = x + y;

    printf("A soma entre X e Y eh: %.2f: ",soma);
}