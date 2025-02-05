/*Suponha que um banco permita no máximo 5 transações enviadas por PIX em um dia. Construa um
programa que receba do teclado o saldo disponível na conta do cliente. Em seguida, cadastre os
dados de cada um dos 5 PIX enviados (chave e valor). A cada PIX cadastrado, apresente o saldo
atual da conta do cliente. Caso o cliente não tenha dinheiro suficiente para enviar o PIX, exiba uma
mensagem de erro e não faça a transação. Ao final, imprima os dados das transações e o saldo da
conta do cliente.
*/
#include <stdio.h>

typedef struct {
    char chavePix[100];
    float valor;
    char data[11];

}Transacoes;



int main (){
    Transacoes t[5];
    float saldo;
    int transacoes = 0;

    printf("Digite saldo inicial: ");
    scanf("%f", &saldo);

    //Entrada sssaldo incial
    for(int i = 0; i < 5; i++){
        printf("Transacoes :%d\n ", i + 1);

        printf("Informe data de transacoes: ");
        scanf(" %[^\n]", t[i].data);
        
        printf("Informe chave de PIX: ");
        scanf(" %[^\n]", t[i].chavePix);

        printf("Informa o valor :");
        scanf("%f", &t[i].valor);

        // Verificar saldo suficiente
        if (t[i].valor > saldo) {
            printf("Erro: Saldo insuficiente para realizar essa transação.\n");
        } else {
            // Realizar transação
            saldo -= t[i].valor;
            transacoes++; // Incrementar contador de transações válidas
            printf("Transação realizada com sucesso! Saldo atual: R$ %.2f\n", saldo);
        }
    }
    // Exibir o resumo das transações realizadas
    printf("\nResumo das transações realizadas:\n");
    for (int i = 0; i < transacoes; i++) {
        printf("Transação %d - Data: %s, Chave: %s, Valor: R$ %.2f\n", 
               i + 1, t[i].data, t[i].chavePix, t[i].valor);
    }

    // Exibir saldo final
    printf("\nSaldo final: R$ %.2f\n", saldo);
    return 0;
}
