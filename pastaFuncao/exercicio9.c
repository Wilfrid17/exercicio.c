/*Escreva uma função que recebe três valores reais como parâmetros: nota1, nota2 e nota3,
representando as notas de um aluno em três disciplinas diferentes. A função deve calcular e
retornar a média ponderada das notas, considerando os pesos: peso1 = 2, peso2 = 3 e peso3 = 5.
Em seguida, chame a função e imprima o resultado.
*/
#include <stdio.h>
// Função que calcula a média ponderada
float NotAluno(float not1, float not2, float not3,int pes1, int pes2, int pes3){
    float resultado;
    resultado = (not1*pes1 + not2*pes2 + not3*pes3) / (pes1+pes2+pes3);
    return resultado;

}

int main(){
    float nota1,nota2,nota3;
    int peso1 = 2, peso2 = 3, peso3 = 5;
   //Solicita nota dos usuario
    printf("Informa primeira nota: ");
    scanf("%f", &nota1);
    printf("Informa segunda nota: ");
    scanf("%f", &nota2);
    printf("Informa terceira nota: ");
    scanf("%f", &nota3);
    // Chama a função para calcular a média ponderada
    float media = NotAluno(nota1, nota2, nota3, peso1, peso2, peso3);

    printf("A media da nota poderada de aluno eh: %.2f\n", media);

    return 0;
}