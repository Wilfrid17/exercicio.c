#include <stdio.h>
#include <string.h>

int main()
{
    int idade;
    double salario;
    char nome [50];
    char sexo;

    idade = 54;
    salario = 4560.5;
    strcpy(nome,"Daiane kessy");
    sexo  = 'F';

    printf("A funcionaria %s, do sexo %c, ganha %.2lf e tem %d anos", nome, sexo, salario, idade);
    return 0;
}