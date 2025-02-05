#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    //incializa semente leatorio
    int rand();
    int matriz[4] [3];
    //preenche matriz
    int l,c;
    for(l= 0; l < 4; l++) {
        for(c = 0; c < 3; c++) {
            //printf("Preendendo L %d C %d: ",l,c);
           // scanf("%d", &matriz[l][c]);
           matriz[l][c] = rand() % 10;
            
        }
    }
    for(l= 0; l < 4; l++) {
        for(c = 0; c < 3; c++) {
            printf("%d ",matriz[l][c]);
        }
        printf("\n");
    }

    return 0;
}