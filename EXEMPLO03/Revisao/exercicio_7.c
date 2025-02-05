/*Leia quatro números (N1, N2, N3, N4), cada um deles com uma
casa decimal, correspondente às quatro notas de um aluno. Calcule a média
com pesos 2, 3, 4 e 1, respectivamente, para cada uma destas notas e mostre
esta média acompanhada pela mensagem "Media: ". Se esta média for maior
ou igual a 7.0, imprima a mensagem "Aluno aprovado.". Se a média calculada
for inferior a 5.0, imprima a mensagem "Aluno reprovado.". Se a média
calculada for um valor entre 5.0 e 6.9, inclusive estas, o programa deve
imprimir a mensagem "Aluno em exame*/
#include <stdio.h>

int main () {
float n1,n2,n3,n4,media,exame, media_final;
int peso1 = 2, peso2 = 3, peso3 = 4, peso4 = 1;

printf("Digite nota1: ");
scanf("%f", &n1);
printf("Digite nota2: ");
scanf("%f", &n2);
printf("Digite nota3: ");
scanf("%f", &n3);
printf("Digite nota4: ");
scanf("%f", &n4);

media = (n1*peso1 + n2*peso2 + n3*peso3 + n4*peso4)/(peso1+peso2+peso3+peso4);
printf("Media: %f",media);
if(media >= 7.0) {
   printf("\nAluno Aprovado");
}
else if(media <= 5.0) {
    printf("\nAluno Reprovado");
}
else if (media >= 5.0 && media <= 6.9) {
  printf("Aluno em exame.\n");
} 

// Leitura da nota do exame
printf("\nDigite a nota do exame: ");
scanf("%f", &exame);
printf("Nota do exame: %.1f\n", exame);
        
// Recalcula a média com a nota do exame
media_final = (media + exame) / 2.0;

// Verifica se o aluno foi aprovado ou reprovado após o exame
if (media_final >= 5.0) {
    printf("Aluno aprovado.\n");
} else {
    printf("Aluno reprovado.\n");
}

// Exibe a média final    
printf("Media final: %.1f\n", media_final);

    return 0 ;
}



