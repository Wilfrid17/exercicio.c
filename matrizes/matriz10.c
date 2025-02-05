/*Uma empresa possui três lojas, cada uma com 6 funcionários.
Escreva um programa que forneça à gerência algumas informações relativas
aos salários dos funcionários dessa empresa. Os salários devem ser
armazenados em uma matriz bidimensional (loja X funcionário). O programa
deve:
a. preencher a matriz de salários por leitura do teclado;
b. imprimir os salários de todos os funcionários, identificando qual a
loja em que trabalha;
c. imprimir o total pago em salários por loja;
d. informar quantos funcionários recebem salário superior a R$
2.000,00 na primeira loja;
e. informar a média salarial da segunda loja.*/

#include <stdio.h>

#define LOJAS 3
#define FUNCIONARIOS 6

int main() {
    float salarios[LOJAS][FUNCIONARIOS];
    float total_por_loja[LOJAS] = {0};
    int funcionarios_acima_2000 = 0;
    float media_loja2 = 0;
    
    // a. Preenchendo a matriz de salários
    printf("Digite os salarios dos funcionarios:\n");
    for(int i = 0; i < LOJAS; i++) {
        printf("\nLoja %d:\n", i + 1);
        for(int j = 0; j < FUNCIONARIOS; j++) {
            printf("Funcionario %d: R$ ", j + 1);
            scanf("%f", &salarios[i][j]);
        }
    }
    
    // b. Imprimindo os salários de todos os funcionários
    printf("\nRelatorio de salarios por loja:\n");
    printf("--------------------------------\n");
    for(int i = 0; i < LOJAS; i++) {
        printf("\nLoja %d:\n", i + 1);
        for(int j = 0; j < FUNCIONARIOS; j++) {
            printf("Funcionario %d: R$ %.2f\n", j + 1, salarios[i][j]);
        }
    }
    
    // c. Calculando e imprimindo o total por loja
    printf("\nTotal pago em salarios por loja:\n");
    printf("--------------------------------\n");
    for(int i = 0; i < LOJAS; i++) {
        for(int j = 0; j < FUNCIONARIOS; j++) {
            total_por_loja[i] += salarios[i][j];
        }
        printf("Loja %d: R$ %.2f\n", i + 1, total_por_loja[i]);
    }
    
    // d. Contando funcionários com salário > 2000 na primeira loja
    for(int j = 0; j < FUNCIONARIOS; j++) {
        if(salarios[0][j] > 2000) {
            funcionarios_acima_2000++;
        }
    }
    printf("\nFuncionarios com salario superior a R$ 2.000,00 na Loja 1: %d\n", 
           funcionarios_acima_2000);
    
    // e. Calculando a média salarial da segunda loja
    for(int j = 0; j < FUNCIONARIOS; j++) {
        media_loja2 += salarios[1][j];
    }
    media_loja2 /= FUNCIONARIOS;
    printf("\nMedia salarial da Loja 2: R$ %.2f\n", media_loja2);
    
    return 0;
}