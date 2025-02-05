#include <stdio.h>
//cria um programa que calcular area de um trapezio
int main (){
    double b1, b2, h, area;
    b1 = 7.0;
    b2 = 9.0;
    h = 6.0;

    area = (b1 + b2) / 2.0 * h;

    printf("%lf\n", area);

    return 0;
}