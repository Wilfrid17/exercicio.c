/*UM PAIS A TEM 80.000.000 DE HABITANTES EM 2010 E SUA TAXA DE CRESCIMENTO E DE 3% AO ANO
ESCREVA UM PROGRAMA QUE EXIBA O NUMERO DE HABITANTE DESSE PAIS  PARA CADA ANO 2010 ATE 2030*/


#include <stdio.h>

int main() {
    int habitante = 80000000, anos = 0;
    float crescimento = 0.03;

   printf("Informe quantidade de habitante 2010:\n ");
   scanf("%d",&habitante);
   printf("Informe porcentagem ate 2030:\n ");
   scanf("%f",&crescimento);

    while (anos <= 20)
    {
        habitante += habitante * crescimento;
        anos++;
    }
    printf("O Numero de habitante desse pais de 2010 ate 2030 sera %d: \n",habitante);
    

    return 0;
}