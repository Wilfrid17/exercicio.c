#include <stdio.h>

int main () {

    float number1, number2;

    printf("Informe um numero: ");
    scanf("%f", &number1);

    printf("Informe um segundo numero: ");
    scanf("%f", &number2);

    if(number1 > number2) {
        printf("NUMRO(1) E MAIOR");
    }
    else if(number1 < number2) {
        printf("NUMERO (2) E MENOR");
    }
    else if (number1 == number2) {
        printf("OS DOIS NUMEROS SAO IGUAL");
    }
    else {
        printf("NEGATIVO");
    }
    
        
    
}