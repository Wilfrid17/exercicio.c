#include <stdio.h>
#define SALARIO_MINIMO 1400.00

int main()
{
    float qtd_kw, preco_100kw, preco_1kw, valor_conta;

    printf("Digite quantidade kw: ");
    scanf("%f", &qtd_kw);

    preco_100kw = SALARIO_MINIMO / 7.0;
    preco_1kw = preco_100kw / 100.0;

    valor_conta = preco_1kw * qtd_kw;

    printf("o valor da conta eh:%.2f\n ", valor_conta);
    printf("O valor de kilowatt eh: %.2f\n", preco_1kw);

    return 0;
}