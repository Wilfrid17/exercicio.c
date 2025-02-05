#include <stdio.h>

int main() {
    float valorOriginal, percentual,desconto,valorFinal;
    
    printf("Informa valor do produto: ");
    scanf("%f",&valorOriginal);
    
    if(valorOriginal > 500.00) {
        percentual = 15.0;
    }
    else if(valorOriginal >= 200.00 && valorOriginal <= 499.99) {
        percentual = 10.0;
    }
    else if(valorOriginal < 200.00) {
        percentual = 5.0;
    }
    
    desconto = valorOriginal * percentual / 100.0;
    valorFinal = valorOriginal - desconto;
    
    printf("\nO valor do produto foi : %.2f", valorOriginal);
    printf("\nO valor com desconto eh:  %.2f" , valorFinal);

    return 0;
}
