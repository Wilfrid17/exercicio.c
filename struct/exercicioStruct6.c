/*Escreva um programa que recebe nome completo, 
idade, salário, anos de
experiência na profissão e cargo em uma empresa de N funcionários. 
Calcule e mostre a
idade média dos funcionários, 
o nome do funcionário com maior experiência e o cargo do
funcionário com maior salário.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char nome[100];
    int anos;
    char cargo[100];
    int idade;
    float salario;
} Funcionario;

int main() {
    int N;
    Funcionario f;
    float soma_idades = 0;
    int maior_experiencia = 0;
    float maior_salario = 0;
    char nome_maior_experiencia[100];
    char cargo_maior_salario[100];

    printf("Informe a quantidade de funcionarios: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        printf("\n--- Informacao do funcionario %d ---\n", i + 1);
        
        printf("Informe nome do funcionario: ");
        scanf(" %[^\n]", f.nome);

        printf("Informe idade do funcionario: ");
        scanf("%d", &f.idade);

        printf("Informe anos de experiencia: ");
        scanf("%d", &f.anos);

        printf("Informe cargo do funcionario: ");
        scanf(" %[^\n]", f.cargo);

        printf("Informe salario do funcionario: ");
        scanf("%f", &f.salario);

        soma_idades += f.idade;
        
        // Verifica o funcionário com maior experiência
        if (f.anos > maior_experiencia) {
            maior_experiencia = f.anos;
            strcpy(nome_maior_experiencia, f.nome);
        }

        // Verifica o funcionário com maior salário
        if (f.salario > maior_salario) {
            maior_salario = f.salario;
            strcpy(cargo_maior_salario, f.cargo);
        }
    }

    // Calcula a idade média
    float idade_media = soma_idades / N;
    // Exibe os resultados
    printf("\n--- Resultados ---\n");
    printf("Idade média dos funcionários: %.2f\n", idade_media);
    printf("Funcionário com maior experiência: %s (%d anos de experiência)\n", nome_maior_experiencia, maior_experiencia);
    printf("Cargo do funcionário com maior salário: %s (R$ %.2f)\n", cargo_maior_salario, maior_salario);
    
    return 0;
}
