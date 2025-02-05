/*1. (Beecrowd | 1038) Com base na tabela abaixo, escreva um
programa que leia o código de um item e a quantidade deste item. A seguir,
calcule e mostre o valor da conta a pagar.*/

#include <stdio.h>

int main () {
    float totalPreco,quantidade;
    int codigo;

    printf("codido 1: 12,00  Cachorro-quente 12: ");
    printf("codigo 2: 15,50  X-salada: ");
    printf("codigo 3: 18,00 X-bacon: ");
    printf("Torrada 4: 8,00 simples: ");
    printf("codigo 5: 4,50 Refigernte: ");
    
    printf("Informa o codigo: ");
    scanf("%d", &codigo);
    printf("Digite o quantidade: ");
    scanf("%f", &quantidade);

switch (codigo)
{
case 1:
    totalPreco = 12.00 * quantidade;
    break;
case 2:
   totalPreco = 15.50 * quantidade;
   break;
case 3:
   totalPreco = 18.00 * quantidade;
   break;
case 4:
   totalPreco = 8.00 * quantidade;
   break;
case 5:
   totalPreco = 4.50 * quantidade;
   break;
default:
   printf("Codigo invalido");
    break;
}

printf("O preco total %.2f",totalPreco);

return 0;
}