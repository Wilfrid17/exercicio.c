/*fazer um programa para ler o nome e idade de pessoas. alfinal mostra uma mensagem com os nomes e a idade media entre essa pessoas, com casas decimais.*/
#include <stdio.h>

int main(){
    int  idade1, idade2, soma_idade = 0;
    float media_idade;
    char  nome1[150], nome2[150];

    

    printf("\nDigite seu nome de primeira pessoa: ");
    scanf("%[^\n]", nome1); // Lê o nome com espaços
    getchar();

    printf("\nIdade: ");
    scanf("%d", &idade1);
    getchar();

    printf("\nDigete nome de segunda pessoa: ");
    scanf("%[^\n]", nome2); // Lê o nome com espaços
    getchar();

    printf("\nIdade: ");
    scanf("%d",&idade2);


    soma_idade = idade1 + idade2;

    media_idade = soma_idade / 2;

    printf("A idade de %s e %s eh de %.1f",nome1, nome2, media_idade);

    return 0;
}