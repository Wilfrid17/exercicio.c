/*Você foi contratado para desenvolver um programa que simule
uma conta bancária. O programa deve permitir que o usuário realize três
operações principais: depositar dinheiro na conta, sacar dinheiro da conta e
verificar o saldo atual da conta. Para isso, você deve criar um programa em
linguagem C que inclui funções para cada uma dessas operaçõe*/

#include <stdio.h>

float deposito(float valor, float saldo){
    return valor + saldo;
}

float sacar( float valor, float saldo) {
    if(valor > saldo){//vai verificar se saldo e sufiente com valor digitado por usuario
        printf("Saldo insuficiente para sacar: ");
        return saldo;
    }
    return saldo - valor;
    
}

float salDoAcount (float saldo){
    return saldo;
}


int main(){
   float saldo = 0.0;
   int opcao;
   float valor;
   
   do {
       printf("\n=== MENU BANCO ===\n");
        printf("1. Depositar\n");
        printf("2. Sacar\n");
        printf("3. Verificar Saldo\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao)
        {
        case 1:
            printf("Digite um valor para deposito: R$ ");
            scanf("%f", &valor);
            if(valor > 0){
                saldo = deposito (valor, saldo);
                printf("Deposito realizado com sucesso!:\n ");
            }else{
                printf("Valor invalido para deposito!:\n ");
            }
            break;

        case 2:
            printf("Digite valor para fazer saque R$:\n");
            scanf("%f", &sacar);
            if(valor > 0){
                saldo = sacar(valor, saldo);
            }else{
                printf("valor invalido para saque!:\n ");
            }

        case 3:
            printf("Saldo Atual: R$%.2f\n ",salDoAcount(saldo));
        case 4:
            printf("Obrigado por usar nosso Banco\n");
        default:
           printf("Opcao invalida!");
            break;
        }
   }while(opcao != 4);


    return 0;
}