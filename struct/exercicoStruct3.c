/*Crie um programa que cadastre em registros o nome, o peso e a altura de 5 esportistas. Apresente na tela
os dados de cada esportista e seu IMC (deve haver um campo para o IMC no registro)*/
#include <stdio.h>

typedef struct{
    char nome[20];
    float altura;
    float peso;
    float IMC;
} esportistas;

int main()
{
    esportistas e[5];

    // preenchendo dados de esportista
    for (int i = 0; i < 5; i++)
    {
        printf("\n--Formacao sobre esportistas:%d--\n ", i + 1);

        printf("Digite nome de esportista: ");
        scanf(" %[^\n]", e[i].nome);

        printf("Digite altura do esportista: ");
        scanf("%f", &e[i].altura);

        printf("Digite peso do esportista: ");
        scanf("%f", &e[i].peso);
        //CALCULA IMC
      e[i].IMC = e[i].peso / (e[i].altura * e[i].altura);
    }
    //Exibindo dados do esportivas
    printf("\n --Dados dos Esportistas---\n");
    for(int i = 0; i < 5; i ++){
        printf("\nEsportista%d:\n", i + 1);
        printf("Nome: %s\n", e[i].nome);
        printf("Altura: %.2f m\n", e[i].altura);
        printf("peso: %.2f kg\n", e[i].peso);
        printf("IMC: %.2f\n", e[i].IMC);
    }

    return 0;
}
