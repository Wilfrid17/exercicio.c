/*Em uma certa papelaria, até 100 folhas, a cópia do xerox custa
R$ 0,25 e, acima de 100 folhas, cada cópia adicional custa R$ 0,20. Escreva
um algoritmo que dado o número total de cópias, informe o valor a ser pago*/

#include <stdio.h>

int main (){
    int folhas;
    float valor;

    printf("Digite quantidade da folhas: ");
    scanf("%d", &folhas);

    if (folhas <= 100) {
        valor = 0.25 * folhas;
    }
    else {
        valor = (folhas-100)*0.20+0.25;
    }
    printf("O valor foi %.2f", valor);

    return 0;
}