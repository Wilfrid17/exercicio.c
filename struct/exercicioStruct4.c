/*Crie um programa que armazene o resultado de 5 jogos realizados em uma rodada do campeonato
brasileiro de futebol. Para cada jogo, será necessário armazenar as seguintes informações:
a. Data do jogo;
b. Time mandante;
c. Time visitante;
d. Gols do mandante;
e. Gols do visitante.
Depois dos dados informados, o algoritmo deve escrever na tela os dados de cada jogo, indicando quem foi
o vencedor ou se deu empate. Utilize um vetor de registros na sua implementação.
*/
#include <stdio.h>
typedef struct {
    char Data_jogo[11];
    char timeMandante[100];
    char timeVisitante[100];
    int golsMandante;
    int golsVisitante;
}jogo;

int main(){
    jogo j[5];

    //preenchendo dados do jogo
    for(int i = 0; i < 5; i++){
        printf("\nPreenche informacao sobre jogo:%d\n ", i + 1);

        printf("Informe porfavor Data do jogo: ");
        scanf(" %[^\n]", j[i].Data_jogo);

        printf("Informa time mandante: ");
        scanf(" %[^\n]", j[i].timeMandante);

        printf("informe time visitante: ");
        scanf(" %[^\n]", j[i].timeVisitante);

        printf("Digite gols mandante: ");
        scanf("%d", &j[i].golsMandante);

        printf("Digite gols visitante: ");
        scanf("%d", &j[i].golsVisitante);
     
    }

    printf("\nResultado do jogos:\n");
    for(int i = 0; i < 5 ; i++){
        printf("\nJogo %d - Data: %s\n", i + 1, j[i].Data_jogo);
        printf("%s (%d) x (%d) %s\n", j[i].timeMandante, j[i].golsMandante, 
        j[i].golsVisitante, j[i].timeVisitante);
       if(j[i].golsMandante > j[i].golsVisitante ){
            printf("Vencedor: %s", j[i].timeMandante);
       }else if (j[i].golsMandante < j[i].golsVisitante){
            printf("Vencedor: %s\n", j[i].timeVisitante);
       }else{
         printf("Resultado: empate\n");
       }
    }

    return 0;
}