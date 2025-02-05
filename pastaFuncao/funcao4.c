/*Leia três valores do teclado e imprima o maior valor dentre os três.
Escreva uma função para leitura dos valores do teclado e uma função para decidir qual dos números é
maior*/
#include <stdio.h>

int maiorValor(int x, int y, int z) {
    int resultado;

    resultado = x;
    if (y > resultado) {
       resultado = y;
    }

    if (z > resultado) {
       resultado = z;
    }

    return resultado;
}

int lerPositivo() {
    int num;
    printf("Informe um numero positivo: ");
    scanf("%d", &num);
    return num;
}

int main() {
    int a, b, c, maior;
    
    a = lerPositivo();
    b = lerPositivo();
    c = lerPositivo();

    maior = maiorValor(a, b, c);

    printf("O maior valor e: %d", maior);

    return 0;
}