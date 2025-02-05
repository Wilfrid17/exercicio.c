/*Você foi contratado para desenvolver um programa que simule
uma conta bancária. O programa deve permitir que o usuário realize três
operações principais: depositar dinheiro na conta, sacar dinheiro da conta e
verificar o saldo atual da conta. Para isso, você deve criar um programa em
linguagem C que inclui funções para cada uma dessas operaçõe*/

#include <stdio.h>
//prototico de funcoes
void deposito (float *saldoAtual);
void verificaSaldo( float saldoAtual);
void saque(float *saldoAtual);

int main(){
    float saldo = 0.0;
    int opcao;
    do {
        printf("\n=== BEM VINDO AO BANCO XYZ ===\n");
        printf("1. Depositar\n");
        printf("2. Sacar\n");
        printf("3. Verificar Saldo\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1: 
            deposito(&saldo);
            break;
        case 2: 
            saque(&saldo);
            break;
        case 3:
            verificaSaldo(saldo);
            break;
        case 0:
            printf("encerrando o programa...\n");
            break;
        default:printf("Opcao invalida! Tente novamente! \n");
            break;
        }
    }while(opcao != 0);


    return 0;
}
void deposito (float *saldoAtual){
    float valor;

    printf("Digite valor deseja depositar: ");
    scanf("%f", &valor);

    *saldoAtual = *saldoAtual + valor;

    verificaSaldo(*saldoAtual);
}

void verificaSaldo( float saldoAtual){
    printf("O saldo atual da conta eh: R$%.2f \n", saldoAtual);
}

void saque(float *saldoAtual){
    float valor;
    verificaSaldo(*saldoAtual);

    do {
         printf("Digite o valor a ser sacado: ");
         scanf("%f", &valor);
         if(valor > *saldoAtual){
            printf("Saldo insuficiente \n");
         }while(valor > *saldoAtual);

         *saldoAtual = *saldoAtual - valor;

         verificaSaldo(*saldoAtual);
    }while(valor > *saldoAtual);
    *saldoAtual = *saldoAtual - valor;
    
    verificaSaldo(*saldoAtual);

}