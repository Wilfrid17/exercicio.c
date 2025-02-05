#include <stdio.h>
// definição de struct sempre acima da main()
typedef struct {
    int cod;
    char nome[50];
    float salario;
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

    printf("Digite o salario: ");
    scanf("%f", &f.salario);

    printf("Digite o cargo: ");
    scanf(" %c", &f.cargo);

    if (f.salario <= 2000.00) {
    f.depto = 1;
    } else {
    f.depto = 2;
    }
    // imprimindo os dados da estrutura f
    printf("\n --- Dados do funcionario --- \n");
    printf("Codigo: %d \n", f.cod);
    printf("Nome: %s", f.nome);
    printf("Salario: %.2f \n", f.salario);
    printf("Departamento: %d \n", f.depto);
    printf("Cargo: %c \n", f.cargo);

    return 0;
}
