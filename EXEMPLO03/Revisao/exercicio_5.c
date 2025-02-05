/*Beecrowd | 1037) Escreva um programa que leia um valor
qualquer e apresente uma mensagem dizendo em qual dos seguintes
intervalos [0,25], (25,50], (50,75], (75,100] esse valor se encontra. Se o valor
não estiver em nenhum destes intervalos, deverá ser impressa a mensagem
“Fora de intervalo”. O símbolo ( representa "maior que". Por exemplo:
[0,25] indica valores entre 0 e 25.0000, inclusive eles.
(25,50] indica valores maiores que 25 Ex: 25.00001 até o valor 50.0000000*/

#include <stdio.h>

int main () {
    float valor;

    printf("Digite um valor: ");
    scanf("%f",&valor);

    if(valor >= 0.0 && valor <= 25.0) {
        printf("Intervalo[0,25]\n");
    }
    else if(valor > 25.0 && valor <= 50.0 ) {
        printf("Intervalo [50.0]");
    }
    else if (valor > 50.0 && valor <= 75.0) {
        printf("Intervalo [75.0]");
    }
    else if(valor > 75.0 && valor <= 100.0) {
        printf("Intervalo [100.0]");
    }
    else {
        printf("Fora de intervalo");
    }

    return 0;

}