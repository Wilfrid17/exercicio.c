#include <stdio.h>

typedef struct {
    char placa[9];
    char modelo[20];
    char marca[20];
    int ano;
    float km;
}automovel;

int main(){
    automovel a1;

    printf("Digite placa do veiculo: ");
    fgets(a1.placa, 8,stdin);

    printf("Digite modelo do veiculo: ");
    fflush(stdin);
    fgets(a1.modelo, 20,stdin);

    printf("Digite marca do veiculo: ");
    fflush(stdin);
    fgets(a1.marca, 20,stdin);

    printf("Digite o ano de veiculo: ");
    fflush(stdin);
    scanf("%d", &a1.ano);

    printf("Digite kilometragem do veiculo: ");
    scanf("%f", &a1.km);

    printf("PLACA: %s", a1.placa);
    printf("MODELO: %s", a1.modelo);
    printf("KM: %.3f", a1.km);
    printf("ANO: %d", a1.ano);

    return 0;
}