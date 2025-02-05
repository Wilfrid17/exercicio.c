#include <stdio.h>
// definição de struct sempre acima da main()
typedef struct {
    int cod;
    char nome[50];
    float salario[3];
    int depto;
    char cargo;
} funcionario;

int main() {
    // criando uma estrutura f do tipo funcionario
    funcionario f;
    // preenchendo os dados da estrutura f
    f.cod = 123;
    printf("Digite o nome: ");
    scanf("%[^\n]s", f.nome);

    for(int i = 0; i < 3; i++) {
        printf("Digite o salario %d: ", i);
        scanf("%f", &f.salario[i]);
    }

    printf("Digite o departamento: ");
    scanf("%d", &f.depto);
    printf("Digite o cargo: ");
    scanf(" %c", &f.cargo);

    // imprimindo os dados da estrutura f
    printf("\n --- Dados do funcionario --- \n");
    printf("Codigo: %d \n", f.cod);
    printf("Nome: %s", f.nome);
    printf("3 ultimos salarios: \n");

    for(int i = 0; i < 3; i++){
        printf("%.2f ", f.salario[i]);
        printf("\nDepartamento: %d \n", f.depto);
        printf("Cargo: %c \n", f.cargo);
    }
    
    return 0;
}