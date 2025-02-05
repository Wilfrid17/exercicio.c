#include <stdio.h>

int main () {
    //CRIE UMA MATRIZ DE 11 LINHA E 11COLNA QUE CONTENHA A TABUADA DE 0 E 10.
   int tabuada [11][11];
   int l,c;

   for(l = 0; l < 11; l++){
      for(c = 0; c < 11; c++) {
         tabuada[l][c] = l* c;
      }
   }
   printf("TABUADA DE 0 ATE 10:\n ");
   printf("=================================================\n");
   for(l = 0; l < 11; l++){
      for(c = 0; c < 11; c++) {
        printf("%4d ",tabuada[l][c]);

      }
      printf("\n");
   }


    return 0;
}