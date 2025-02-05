/*Escreva um programa que crie um vetor de números inteiros de 6 posições e povoe esse vetor com
valores lidos do teclado. O programa deverá aceitar somente números pares entre 1 e 20. Ao final,
imprima todos os valores salvos no vetor, além da média dos valores, o menor e o maior valor*/

#include <stdio.h>

int main(){
    int vet[6],valoMaior,valoMenor;
    int i, valor;
    float soma,media;

    valoMaior = 0; //gantindo evitar lixo de memoria
    valoMenor = 21;

    for(i=0; i<6; i++) {
        printf("Digite um valor de 1 e 20 (par): ");
        scanf("%d", &valor);
       //Verificar se o valor e valido par entre 1 e 20
       while (valor < 1 || valor > 20 || valor % 2 != 0) {
        printf("Numero invalido Digite de 1 a 20 (par): ");
        scanf("%d", &valor);
    }

       vet[i] = valor;//Armazena valor no vetor
       soma += valor;//soma o valor para calcula media
    
       //Alualizando valor maior e menor
       if(valor < valoMenor) valoMenor = valor;
       if(valor > valoMaior) valoMaior = valor;
    }

    //calcula media
    media = soma /6.0;
    
    //Imprime valor armazenar no vetor
    printf("Valor no vetor:\n");
    for(i=0; i < 6; i++){
        printf("%d ", vet[i]);
    }

    //Imprime media, valor menor, valor maior
    printf("\nValor menor %d ", valoMenor);
    printf("\nValor Maior %d ", valoMaior);
    printf("\nMedia dos valores: %2.f ",media);

    return 0;
}