/*faça um programa que leia N numeros rais e armazene-os em um vetor.Em seguida:
Imprimir todos elementos do vetor
mostra na tela a somo e a media dos elementos do vetor*/
#include <stdio.h> 

int main() {
    float vetor[10];
    float media,soma = 0;
    int n,i;
    //quantidade de numero a serem digitada
    printf("Quantos numero voce deseja digitar: ");
    scanf("%d",&n);
    //le os valor e calcula e soma
    for(i = 0; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%f",&vetor[i]);
        //soma = soma + vetor[i];//soma os valores
    }
    //Imprimir o valores
    printf("VALORES:\n = ");
    for(i=0; i<n; i++){
        printf("%.1f ",vetor[i]);
    }

    //soma os valores
    for(i=0; i<n; i++){
        soma = soma + vetor[i];
    }
     //calcula media
    media = soma / n;
    
    //imprimir soma e a media
    printf("SOMA = %.2f\n",soma);
    printf("MEDIA = %.2f\n",media);

    return 0;
}