/*

3. Escreva um procedimento que recebe 3 valores inteiros por parâmetro e os exiba em ordem
crescente. Faça um programa main que leia do teclado n conjuntos de 3 valores e acione o
procedimento para cada conjunto.

*/

#include <stdlib.h>
#include <stdio.h>

void ordenar(int valores[3]);

int main() {

    int totalconjuntos;

    printf("Digite a quantidade de conjuntos para ordenar:\n");
    scanf("%d", &totalconjuntos);

    int conjuntos[totalconjuntos][3];

    for (int i = 0; i < totalconjuntos; i++) {
        int numerotemporario, menor, meio, maior;
        for (int j = 0; j < 3; j++) {
            printf("Digite o número %d do conjunto %d para ordenar:\n", j+1, i+1);
            scanf("%d", &numerotemporario);
            conjuntos[i][j] = numerotemporario;
        }
        ordenar(conjuntos[i]);
        printf("Conjunto %d ordenado: %d %d %d.\n", i, conjuntos[i][0], conjuntos[i][1], conjuntos[i][2]);
    }

    return 0;
}

// Ordena o vetor utilizando técnica swap
void ordenar(int valores[3]) {

    int temp;

    if (valores[0] > valores[1]) {
        temp = valores[0];
        valores[0] = valores[1];
        valores[1] = temp;
    }
    if (valores[0] > valores[2]) {
        temp = valores[0];
        valores[0] = valores[2];
        valores[2] = temp;
    }
    if (valores[1] > valores[2]) {
        temp = valores[1];
        valores[1] = valores[2];
        valores[2] = temp;
    }

}