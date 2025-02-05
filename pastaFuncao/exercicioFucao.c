/*Escreva um programa que exiba o quadrado de um número digitado no teclado.
Escreva uma função para ler esse número e um procedimento para calcular seu quadrado.*/

#include <stdio.h>
#include <math.h>

double leDouble(){
    double valor;//variavel local
    do{
         printf("Digite um valor positivo: ");
         scanf("%lf", &valor);
    }while (valor < 0);
    
    return valor;//retorna valor lido para main
}

void calcularQuadrado(double numero){
    double resultado;
    resultado = pow(numero, 2.0);
    printf("O quadro do numero eh: %.1lf\n", resultado);
}

int main() {
    double num;
    
    num = leDouble();

    calcularQuadrado(num);
    

    return 0;
}



