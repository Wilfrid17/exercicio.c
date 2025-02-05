/*Escreva um programa, utilizando estrutura, que atende os itens abaixo:
a. O programa recebe e armazena o nome de N cidades com renda per capita,
IDH (índice de desenvolvimento humano) e população. O usuário fornece a
quantidade de cidades N e as demais informações.
b. Calcular e mostrar a média da renda per capita das N cidades.
c. Determinar e mostrar o nome da cidade com maior população.
d. Mostre a renda per capita, IDH e população de acordo com o nome de uma
cidade digitada pelo usuário.*/

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[200];
    float populacao;
    float IDH;
    float renda_por_capita;
}cidades;

int main(){
    int i,N;
    
    float soma_renda = 0, media_renda;
    char busca_nome[200];
    char maior_pop_cidade[200];
    float maior_populacao = 0;

    printf("Digite a quantidade de cidades: ");
    scanf("%d", &N);

   Cidades cidades[N];

    for(i = 0; i < N; i++){
        printf("\n---Cadastra Cidades---\n", i+1);

        printf("Nome Cidade: ");
        fgets(cidades[i].nome, 200, stdin);
        getchar();

        printf("Quantidade Renda: ");
        fflush(stdin);
        scanf("%f", &cidades[i].renda_por_capita);

        printf("Quantidade populacao: ");
        fflush(stdin);
        scanf("%f", &cidades[i].populacao);

        printf("IDH: ");
        scanf("%f", &cidades[i].IDH);

        soma_renda += cidades[i].renda_por_capita;

        if(cidades[i].populacao > maior_populacao){
            maior_populacao = cidades[i].populacao;
            strcpy(maior_pop_cidade, cidades[i].nome);
        }
    } 

    // calcula a média de renda por capita
    media_renda = soma_renda / N;

    // Exibir os resultados
    printf("\n--- Resultados---\n");
    printf("Media da renda per capita: %.2f\n", media_renda);
    printf("Cidade com maior populacao: %s (%.0f habitantes)\n", maior_pop_cidade);

    // Busca por uma cidade especifica
    printf("\nDigite o nome de cidade para exibir os dados: ");
    getchar();
    fgets(busca_nome, 200, stdin);

    for(i = 0; i < N; i++){
        if(strcmp(cidades[i].nome, busca_nome) == 0){
            printf("\nDados da cidade %s: \n", cidades[i].nome);
            printf("Populacao: %.0f\n", cidades[i].populacao);
            printf("IDH: %.2f\n",cidades[i].IDH);
            printf("Renda per capita: %.2f\n", cidades[i].renda_por_capita);
            break;
        }
    }

    if(i == N) {
        printf("\nCidade nao encontrada. \n");
    }

    return 0;
}
