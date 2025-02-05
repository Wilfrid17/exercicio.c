#include <stdio.h>
//funcao sem retorno no caso void

void subtrai (int x, int y) {
    int resultado;
    resultado = x - y;
    printf("Resultado: %d", resultado);
}

int main() {
    int a = 6, b = 2;
    subtrai(a, b);
    return 0;
}