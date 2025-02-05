#include <stdio.h>
//funcao com retorno
int mult(int x, int y) {
    return x * y;
}

int main() {
    int resultado,
     a = 8, b = 3;
    resultado = mult(a, b);
    printf("%i \n", resultado);
    return 0;
}