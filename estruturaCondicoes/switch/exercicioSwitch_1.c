#include <stdio.h>

int main () {
    char letras;

    printf("Digite uma letras de [a-z]: ");
    scanf("%c", &letras);

    switch (letras)
    {
    case 'a':
        printf("E uma vogal");
        break;
    case 'e':
       printf("E uma vogal");
       break;
    case 'i':
        printf("E uma vogal");
        break;
    case '0':
       printf("E uma vogal");
       break;
    case 'u':
       printf("E uma vogal");
       break;
    default:
       printf("E uma cossoante");
        break;
    }
}