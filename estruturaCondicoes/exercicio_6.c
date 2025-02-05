
#include <stdio.h>

int main() {
    int alunoIdade;
    printf("Informa idade dos Alunos: ");
    scanf("%d", &alunoIdade);
    
    if(alunoIdade >= 4 && alunoIdade <= 5) {
        printf("Turma A");
    }
    else if(alunoIdade >= 6 && alunoIdade <= 8) {
        printf("Turma B");
    }
    else if(alunoIdade >= 9 && alunoIdade <= 10) {
        printf("Turma C");
    }
    else if(alunoIdade < 4 || alunoIdade > 10){
        printf("Sem turmas");
    }
    else {
        printf("Idade informada esta fora do intervalo");
    }

    return 0;
 }
