#include <stdio.h>

void troca(int x, int y){
    int aux;
    aux = x;
    x = y;
    y  = aux;

    printf("pos inversao: %d %d\n",x,y);
}

int main(){
    int a = 2, b = 3;
    troca(a,b);
    

    return 0;

}