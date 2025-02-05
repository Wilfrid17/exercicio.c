#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//funcões no linguem c
float dobro(float n) {
    return n * 2;
}

int lerNumInteiro(){
    int num;
    do {// faça
    printf("Digite um valor inteiro maior que zero: ");
    scanf("%d", &num);
    }while(num < 1);//enquanto

    return num;
}

int main(){
    int num1, num2, num3;
    int soma = 0;
    num1 = lerNumInteiro();
    num2 = lerNumInteiro();
    num3 = lerNumInteiro();
    soma = num1+num2+num3;
    printf("Num1: %d\nNum2: %d\nNum3: %d\n\n",num1, num2, num3);
    printf("A soma dos tres Numeros: %d\n", soma);
    return 0;
}
/*
int main(){
    float x;
    x = dobro(56);
    printf("Dobro: %f\n", x);
}
*/