#include <stdio.h>
int main () {
    int num;

    printf("Digite um valor: ");
    scanf("%d",&num);

    switch (num % 2)
    {
    case 0:
        printf("O valor e par");
        break;
    case 1:
        printf("O valor e impar");
        break;
    default:
        printf("O valor esta fora do intervalo");
        break;
    }
}