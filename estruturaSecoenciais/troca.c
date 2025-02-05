/*fazer um programa para calcula o troco no processo de pagamento de um produto de uma merciaria.
O programa deve ler o preço unitarian do produto a quantidade de unidade compradas deste produto, e o valor em dineiro dado prlo cliente (suponha que haja dineiro suficiente). Seu programa de deve mostar o valor do troco a ser devolvido ao cliente.*/

#include <stdio.h>

int main(){
    int quantidade;
    float valor, preco_unidade, troco, valor_recebido;

    printf("Preco unitario do produto: ");
    scanf("%f", &preco_unidade);
    printf("Quantidade compradas: ");
    scanf("%d", &quantidade);
    printf("Dinheiro recebido: ");
    scanf("%f", &valor_recebido);

    valor = preco_unidade * quantidade;
    troco = valor_recebido - valor;

    printf("TROCO = %.2f ", troco);
}