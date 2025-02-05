/*Escreva uma função que recebe um número inteiro como parâmetro e verifica se ele é um número
perfeito. Um número perfeito é aquele cuja soma de seus divisores (excluindo ele mesmo) é igual a
ele. Em seguida, chame a função para verificar se um número fornecido pelo usuário é perfeito.
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int calcularSomaDiv(int numero) {
    int soma = 0;
    int i;
    //percorre valores de 1 a numero-1;
    for(i =1;  i < numero; i++){
        //testa se i é divisor
        if(numero % i ==0 ){
            soma = soma + i;
        }
    }
    //retorna a soma dosndivisores até menos -1
    return soma;

}
//para verifica se o numero e perfeito!
void verifica(int num, int somaDiv){
    if(somaDiv == num) {
        printf("O numero %d eh ferfeito!\n", num);
    }else{
        printf("O numero %d nao eh perfeito!\n", num);
    }
}

int main() {

    srand(time(NULL));

    int num = rand() % 51;
    int soma;

    soma = calcularSomaDiv(num);

    verifica(num, soma);


    return 0;
}