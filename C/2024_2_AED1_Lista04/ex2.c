/*

2. A prefeitura de uma cidade fez uma pesquisa entre os seus habitantes, coletando dados
sobre o salário familiar e quantidade de membros (pais + filhos). Escreva um procedimento que
leia esses dados para um número não determinado de famílias (ler até que salário igual 0),
calcule e exiba a média de salário da população. Faça um programa main que acione o
procedimento.

*/

#include <stdlib.h>
#include <stdio.h>

void lerFamilia(float * salario, float * salariosfamilias, int * familias, int * familiaatual, float * salariopercapta);

// Declara as variáveis e cria a repetição infinita de ler os valores de salários, e ao final printa a média.
int main() {

    float salario = -1;
    float salariosfamilias = 0;
    float salariopercapta = 0;
    int familias = 0;

    int familiaatual = 0;
    while(salario != 0) {
        lerFamilia(&salario, &salariosfamilias, &familias, &familiaatual, &salariopercapta);
    }

    printf("Média de salário da população por família: R$%2.0f\nSalário per capta: R$%2.0f", salariosfamilias/familias, salariopercapta/familias);

    return 0;
}

// Lê os dados de salário e quantia de membros da família, e altera os valores das variáveis que foram definidas na função main, por meio de ponteiro.
void lerFamilia(float * salario, float * salariosfamilias, int * familias, int * familiaatual, float * salariopercapta) {

    (*familiaatual)++;
    int membrosdafamilia = 0;
    printf("Digite o salário da família %d (ou 0 para encerrar):\n", *familiaatual);
    scanf("%f", salario);
    if (*salario != 0) {
        printf("Digite a quantidade de membros da família %d:\n", *familiaatual);
        scanf("%d", &membrosdafamilia);
        (*familias)++;
        *salariosfamilias += *salario;
        *salariopercapta += *salario/membrosdafamilia;
        printf("A família tem %d membros, com uma renda total de R$%2.0f e uma renda per capta de R$%2.0f\n", membrosdafamilia, *salario, *salario/membrosdafamilia);
    }

}