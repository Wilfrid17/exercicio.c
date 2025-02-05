/*Escreva uma função chamada pesoIdeal() que recebe como parâmetros a altura e o sexo de uma
pessoa (M masculino e F feminino) e retorna o seu peso ideal, utilizando as seguintes fórmulas:
● para sexo masculino: (72.7 * altura) – 58
● para sexo feminino: (62.1 * altura) – 44.7
Faça também o programa principal que recebe do usuário a sua altura, peso atual e sexo, e imprima
na tela mensagem dizendo apenas se o usuário está acima ou abaixo de seu peso ideal, este calculado pela
função pesoIdeal().
*/
#include <stdio.h>
#include <math.h>

float pesoIdeal(float altura, char sexo){
    if(sexo == 'M' || sexo == 'm'){
        return (72.7 * altura) - 58;
    }else if(sexo == 'F' || sexo == 'f'){
        return (62.1 * altura) - 44.7;
    }else {
        printf("Informacao nao incontrado: ");
    }

}

int main() {
    float altura,pesoAtual,pesocalculado;
    char sexo;

    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);
    printf("Digite seu peso em kg: ");
    scanf("%f", &pesoAtual);
    printf("Digite seu sexo: (M para masculina e F para feminino):");
    scanf(" %c", &sexo);

    pesocalculado = pesoIdeal(altura, sexo);

    if(pesocalculado == 0){
        printf("Sexo Invalida 'M' ou 'F':\n ");
    }

    if(pesoAtual < pesocalculado){
        printf("Voce esta abaixo do peso.\n");
    }else if(pesoAtual > pesocalculado){
        printf("Voce esta acima do peso.\n");
    }else{
        printf("Voce esta com peso ideal.\n");
    }
    
    return 0;
}