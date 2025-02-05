#include <stdio.h>
// funcao com subtração com retorno
int subtrai (int x, int y) {

    int resultado;
    resultado = x - y;
    return resultado;
}
int main() {
    int a = 6, b = 2, subtracao;
    subtracao = subtrai(a, b);
    printf("Resultado: %d", subtracao);
    return 0;
}