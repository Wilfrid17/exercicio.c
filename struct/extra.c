/*Escreva um programa que recebe nome completo, 
idade, salário, anos de
experiência na profissão e cargo em uma empresa de N funcionários. 
Calcule e mostre a
idade média dos funcionários, 
o nome do funcionário com maior experiência e o cargo do
funcionário com maior salário.*/

#include <stdio.h>
#include <stdlib.h>
#define QTD_FUNC 3

typedef struct {
    char nome[50];
    char cargo[50];
    int idade, anos_exp;
    float salario;
}funcionario;

int main() {

    funcionario func[QTD_FUNC];
    int i, maior_exp = 0;
    float soma_idades = 0.0, media_idades, maior_salario = 0;

    for(i = 0; i < QTD_FUNC; i++){
        printf("Cadastro funcionario%d---\n", i+1);

        printf("Nome completo: ");
        fflush(stdin);
        scanf(" %[^\n]", func[i].nome);

        printf("Cargo: ");
        fflush(stdin);
        scanf("%[^\n]", func[i].cargo);

        printf("Idade: ");
        fflush(stdin);
        scanf("%d", &func[i].idade);

        printf("Anos: ");
        fflush(stdin);
        scanf("%d", &func[i].anos);

        printf("Anos experiencia: ");
        fflush(stdin);
        scanf("%d", &func[i].exp);

        printf("Salario: ");
        fflush(stdin);
        scanf("%d", &func[i].salario);

        soma_idades = soma_idades + func[i].idade;

        if(func[1].anos_exp > maior_exp) {
            maior_exp = func[i].anos_exp;
        }
    }

    media_idades = soma_idades / QTD_FUNC;
    printf(" A soma de idade dos funcionario eh %.1f\n", media_idades);


    for (i = 0; i < QTD_FUNC; i++){
        if (func[i].anos_exp == maior_exp){
            printf("%s \n", func[i].nome);
        }
        
    }
    printf("\nCargo(s)com maior salario: \n");
    for(i = 0; i < QTD_FUNC; i++){
        
    }
    

    return 0;

}