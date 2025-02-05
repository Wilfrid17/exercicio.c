#include <stdio.h>

int main(){

    float Notas [5] = {2.3, 4.5, 6.7, 7.8, 8.9};

   int indice;

   for (indice = 0; indice < 5; indice++){
    printf("Preenchendo o  indice %d: ", indice);
    scanf("%f", &Notas[indice]);
   }

   // Notas [1] = 8.7;
   for (indice = 0; indice < 5; indice++) {
      printf("%.1f ", Notas[indice]);
   }


    return 0;
}