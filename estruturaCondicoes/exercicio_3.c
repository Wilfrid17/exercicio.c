#include <stdio.h>

int main () {

    int N;

    printf("Digite um numero: ");
    scanf("%d", &N);

    if(N < 0) {
        N = N * -1;
    }
    printf("O valor eh: %d", N);
    
    return 0;    
    
}