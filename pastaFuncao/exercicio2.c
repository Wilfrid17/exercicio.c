/*Crie um programa que calcule XY (X elevado a Y), sendo que os valores de X e Y devem ser números
do tipo double, positivos, informados pelo usuário. O resultado deve ser exibido na tela.*/
#include <stdio.h>
#include <math.h>

double lerDoule(){
    double valorX;
    //double valorY;
    do {
        printf("Informar um valor positivo: ");
        scanf("%lf", &valorX);
    }while(valorX < 0);

    return valorX;// valor no local
}
    double CalvalorX(double valorX,double valorY){
    double resultado;
    resultado = pow(valorX,valorY);
    return resultado;
}

int main() {
    double num, exp, resultado;

    num = lerDoule();
    printf("Informar o expoente: ");
    scanf("%lf", &exp);

    resultado = CalvalorX(num, exp);
    printf("O resultado eh: %.2lf\n", resultado);

    return 0;
}