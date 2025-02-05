/*Leia dois números inteiros a e b do teclado e imprima a sequência de valores entre esses números.
O programa deve ser executado até que o usuário decida parar.
Escreva uma função para leitura de a e b do teclado e um procedimento para exibir a sequência de
números.
*/

#include <stdio.h>

int lerPositivo(){
    int num;

    do {
        printf("Informe um numero positivo: ");
        scanf("%d", &num);
    }while(num < 0);

    return num;
}

void mostraNumeros(int a, int b){
    int i;
    for(i = a; i<=b; i++){
        printf("%d ",i);
    }
    printf("\n");
}
int main(){
    char opcao;
    int nA, nB;

    do{
       nA = lerPositivo();
       nB = lerPositivo();
       mostraNumeros(nA, nB);

       printf("Deseja continuar? [S/N]: ");
       scanf("%c" ,&opcao);
       printf("\n");
    } while (opcao == 'S');
    
    return 0;
}