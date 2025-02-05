#include  <stdio.h>

int main () {
    float PI,volume, raio, altura;
    PI = 3.14;

    printf("Digite o valor do raio da lata: ");
    scanf("%f", &altura);

    printf("Digite altura da lata: ");
    scanf("%f", &raio);
    
    volume = PI * raio * raio * altura;

    printf("O volume da lata eh:%.2f",volume);
}