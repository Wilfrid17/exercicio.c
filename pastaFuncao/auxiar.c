#include <stdio.h>
//(ponteiro tem um tipo nome conteudo e endreco).
void troca(int *x, int *y){
    int aux;
    aux = *x;
    *x = *y;
    *y  = aux;

    printf("Na funcao - Pos inversao: %d %d\n ", *x ,*y);
}

int main(){
    int a = 2, b = 3;
    troca(a , b);

    printf("Na main - Pos inverso %d %d\n\n", a, b);
    

    return 0;

}