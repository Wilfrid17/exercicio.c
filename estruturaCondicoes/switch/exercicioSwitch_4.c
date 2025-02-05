#include <stdio.h>

int main (){
    float precoAvista,acrescimo,valorJulo,valorFinal;
    int tipoCompra;

    printf("INFORMA FORMA DE PAGAMENTO: ");
    scanf("%f",&precoAvista);

   // printf("INFORMA TIPO DE COMPRAS: ");
    printf("1-Avista \n2-2vezes \n3-3vezes: ");
    scanf("%d",&tipoCompra);

    switch (tipoCompra)
    {
    case 1:
        printf("COMPRA AVISTA\n");
        acrescimo = 0.0;
        break;
    case 2:
        printf("COMPRA 2 VEZES\n");
        acrescimo = 0.10;
        break;
    case 3:
        printf("COMPRA 3 VEZES\n");
        acrescimo = 0.20;
        break;
    default:
        printf("Opcao invalido");
        break;
    }

    valorJulo = precoAvista * acrescimo;
    valorFinal = valorJulo + precoAvista;

    printf("O valor final %.2f", valorFinal);

    return 0;
}