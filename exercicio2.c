#include <stdio.h>

int main() {

    int numero,duzia, soma,mult,div;
    numero = 54;
    duzia = 5;

    soma = numero + duzia;
    div = soma / duzia;
    mult = div * soma;
     printf("\nA soma entre numero e duzia e : %d", soma);
     printf("\nA divisao entre soma e duzia e : %d", div);
     printf("\nA multiplicacao entre divisao e soma e: %d", mult);

     return 0;
}