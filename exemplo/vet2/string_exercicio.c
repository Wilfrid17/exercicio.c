/*Escreva um programa que leia uma string do teclado e a escreva na tela ao contrário (do final para o
início)*/

#include <stdio.h>

int main () {
    char letras[150];
    int i;

    printf("Quantidade da letras: ");
    scanf("%s", &letras);

    for(i = 0; i < letras; i++) {
        printf("Preenche valor da letras %: \n",i);
        scanf("%s", &letras[i]);

    }

    for(i = letras; i >= 0; i--){
        printf("%s", &letras);
    }
}