/*escreva um programa que leia uma sequencia de valores reais positivo
fornecidos pelo usuarios, e determine a amplitude estatistica da amostra. a amplitude e a diferencia entre o maior e o menor valor da sequencia

a sequencia de valores pode vir de qualquer ordem e termina quando valor 0 for digitado 0
o nao faz parte da sequencia
O programa deve calcular e exibir a amplitude que e diferenca entre o maior e o menor valor da sequencia*/

#include <stdio.h>

int main() {
    float valor,maior,menor;
    int sequencia = 1;
    
    do {
         printf("Digite um numero\n: ");
         scanf("%f",&valor);
     
         if(valor <= 0) {
            if(sequencia) {
                maior = menor = valor;
                sequencia = 0;
            }else {
                if (valor > maior)
                    maior = valor;
                if (valor < menor) 
                    menor = valor; 
            }
         } 
        
     if (!sequencia) {
        printf("A amplitude da sequencia e: %.2f\n", maior + menor );
    } 
    }while (valor != 0);

    
    return 0;
}