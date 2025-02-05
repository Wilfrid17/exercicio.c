#include <stdio.h>

int main()
{
    int idade;

    printf("Informa seu idade ? ");
    scanf("%d", &idade);

    if (idade >=18)
    {
        printf("Voce e maior idade ");
    }
    else if (idade < 18)
    {
        printf("Voce e menor idade ");
    }
    else {
        printf("Idade nao foi informado");
    }
    
    return 0;
}
  