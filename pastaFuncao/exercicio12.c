/*Um estabelecimento fará uma promoção com descontos nos produtos A e B. Se forem comprados
apenas os produtos A ou apenas os produtos B, o desconto será de 10%. Caso sejam comprados os
produtos A e B, o desconto será de 15%. O custo de cada produto é, respectivamente, para os
produtos A e B, R$10 e R$20. Elaborar um programa que, por meio de módulos, calcule e apresente
o valor da despesa do freguês na compra dos produtos. Lembre-se de que o freguês pode levar mais
de uma unidade de um determinado produto*/
#include <stdio.h>
#include <math.h>
// Função que calcula o valor total sem desconto
float calculaPreco(int quantidadeA, int quantidadeB) {
    float precoA = 10;
    float precoB = 20;
    return quantidadeA * precoA + quantidadeB * precoB;
}
// Função que calcula o desconto com base nas quantidades de produtos comprados
float calculaDesconto(int quantidadeA, int quantidadeB){
    if(quantidadeA > 0 && quantidadeB > 0){
        return 0.15;//desconto 15% se ambos dos produtos foram comprados
    }else if(quantidadeA > 0 || quantidadeB > 0){
        return 0.10; // Desconto de 10% se apenas um dos produtos for comprado
    }
    return 0;
}

// Função principal que calcula o valor final com o desconto aplicado
float calculaFinal(int quantidadeA, int quantidadeB){
    float total = calculaPreco(quantidadeA, quantidadeB);
    float desconto = calculaDesconto(quantidadeA,quantidadeB);
    return total *(1 - desconto);//aplicar desconto

}

int main(){
    int quantidadeA, quantidadeB;

    printf("Digite quantidade A: ");
    scanf("%d", &quantidadeA);
    printf("Digite quantidade B: ");
    scanf("%d", &quantidadeB);

    float valorFinal = calculaFinal(quantidadeA,quantidadeB);
    printf("O valor total da compra com desconto eh: R$%.2f\n",valorFinal);

}