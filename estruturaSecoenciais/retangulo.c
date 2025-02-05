/*fazer um programa para ler medidas da base e altura de um retângulo. Em seguida, mostrar o valor da ârea, perimetro e diagonal deste retangulo, com quatro casas decimais.*/
#include <stdio.h>
#include <math.h>

int main(){
    float base, altura, area, perimetro, diagonal;

    printf("\nBase do retangulo: ");
    scanf("%f", &base);

    printf("Altura do retangulo: ");
    scanf("%f", &altura);
    
    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt((base * base) + (altura * base));

    printf("AREA = %.4f\n ", area);
    printf("PERIMETRO = %.4f\n ", perimetro);
    printf("DIAGONAL = %.4f\n",diagonal);


    return 0;
}