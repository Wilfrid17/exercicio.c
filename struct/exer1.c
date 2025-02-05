#include <stdio.h>
// definição de estrutura sempre acima da main()
struct pessoa {
    char nome[50];
    int idade;
};

int main() {
// criando uma estrutura p do tipo pessoa
    struct pessoa p;
// preenchendo os dados da estrutura p
    printf("Digite o nome: ");
    scanf("%[^\n]s", p.nome);
    
    printf("Digite a idade: ");
    scanf("%d", &p.idade);
    // imprimindo os dados da estrutura p
    printf("%s tem %d anos \n", p.nome, p.idade);
    return 0;
}