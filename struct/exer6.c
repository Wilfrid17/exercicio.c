#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int idade;
    char sexo;
    char nome [100];
}Pessoa;

int main() { 
    Pessoa pessoa;

    printf("Digite seu nome: ");
    fgets(pessoa.nome, 100, stdin);
    printf("Digite sua idade: ");
    scanf("%d", &pessoa.idade);
    getchar();
    printf("Digite F ou M para o sexo: ");
    scanf("%c", &pessoa.sexo);

    printf("Nome: %s\nIdade: %d\nSexo: %c\n", pessoa.nome, pessoa.idade, pessoa.sexo);
    
    return 0;
}