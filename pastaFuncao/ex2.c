#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//cria uma funcao que retonar o tamanho de um string
//tipo de retorno  indentificador - parametros
int minhaStrig(char str[]){
    int tam = 0;

    while(str[tam] != '\0') {
        tam++;
    }
    return tam;
}

int main(){
    char vet[20] = ("Ola Bom dia");

    printf("Strlen: %d\n", strlen(vet));
    printf("minhaStrLen: %d\n", minhaStrig(vet));

    return 0;
}