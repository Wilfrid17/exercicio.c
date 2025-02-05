/*Fazer um programa para ler as medidas de largura e comprimento de um terreno com uma casa decimais, bem como o valor do metro quadrado do terreno com duas casa decimais. em seguida, o programa deve mostra o valor de da area do terreno bem como o valor do preço do terreno. ambos com duas  com  duas caasa decimais*/
#include <stdio.h>

int main(){
    float largura,comprimento,valor;
    float area, preco;

    printf("\nDigite lagura do terreno: ");
    scanf("%f",&largura);

    printf("\nDigite o comprimento do terreno: ");
    scanf("%f",&comprimento);

    printf("\nDigete o valor do metro quadrado: ");
    scanf("%f",&valor);

    area = largura * comprimento;
    preco = area * valor;

    printf("Area do terreno = %.2f\n", area);
    printf("Preco do terreno = %.2f\n", preco);



    return 0;
}