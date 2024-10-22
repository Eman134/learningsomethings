/*

1. Escreva um procedimento que receba 3 notas de um aluno por parâmetro e uma letra. Se a
letra for "A", o procedimento calcula e escreve a média aritmética das notas do aluno, se for
"P", calcula e escreve a sua média ponderada (pesos: 5, 3 e 2). Escreva também um programa
main que leia 3 notas de n alunos e acione o procedimento para cada aluno.

*/

#include <stdlib.h>
#include <stdio.h>

void calculoMedia(int aluno, int nota1, int nota2, int nota3, char input);
void lerNotas(int aluno, int * nota1, int * nota2, int * nota3, char * input);


// Recebe os inputs de quantia de alunos e faz a repetição por eles

int main() {

    int nota1, nota2, nota3;
    char input;
    int alunos;

    printf("Escreva a quantidade de alunos:\n");
    scanf("%d", &alunos);

    for (int i = 0; i < alunos; i++) {
        lerNotas(i+1, &nota1, &nota2, &nota3, &input);
    }

    return 0;
}

// Lê as notas do usuário e coloca direto no ponteiro da variável que foi passado

void lerNotas(int aluno, int * nota1, int * nota2, int * nota3, char * input) {
    printf("Escreva a nota 1 do aluno %d\n", aluno);
    scanf("%d", nota1);
    printf("Escreva a nota 2 do aluno %d\n", aluno);
    scanf("%d", nota2);
    printf("Escreva a nota 3 do aluno %d\n", aluno);
    scanf("%d", nota3);
    printf("Digite o método para calcular a média da nota do aluno %d:\nDigite 'A' para média aritmética;\nDigite 'P' para média ponderada.\n", aluno);
    scanf(" %c", input);
    calculoMedia(aluno, *nota1, *nota2, *nota3, *input);
}

// Faz o cálculo médio das notas e imprime na tela

void calculoMedia(int aluno, int nota1, int nota2, int nota3, char input) {

    float media;

    if (input == 'A') {
        media = (nota1+nota2+nota3)/3;
        printf("Média aritmética das notas do aluno %d: %2.0f", aluno, media);
    } else {
        media = (nota1*5 + nota2*3 + nota3*2) / 10;
        printf("Média ponderada das notas do aluno %d: %2.0f", aluno, media);
    }

}
