/*

6. Escreva um procedimento que receba por parâmetro 3 valores reais X, Y e Z e que verifique
se esses valores podem ser os comprimentos dos lados de um triângulo e, neste caso, exibe qual
é o tipo de triângulo formado. Para que X, Y e Z formem um triângulo é necessário que a
seguinte propriedade seja satisfeita: o comprimento de cada lado de um triângulo é menor do
que a soma do comprimento dos outros dois lados. O procedimento deve identificar o tipo de
triângulo formado observando as seguintes definições:
    1. Triângulo Equilátero: os comprimentos dos 3 lados são iguais;
    2. Triângulo Isósceles: os comprimentos de pelo menos 2 lados são iguais;
    3. Triângulo Escaleno: os comprimentos dos 3 lados são diferentes;

Faça um programa que leia um número indeterminado de triângulos (valores dos 3 lados) e para
cada triângulo, acione o procedimento.

*/

#include <stdio.h>
#include <stdlib.h>

// Verifica se é um triângulo e o tipo dele
void verificarTriangulo(float x, float y, float z) {
    if (x < y + z && y < x + z && z < x + y) {
        if (x == y && y == z) {
            printf("Triângulo Equilátero\n");
        } else if (x == y || y == z || x == z) {
            printf("Triângulo Isósceles\n");
        } else {
            printf("Triângulo Escaleno\n");
        }
    } else {
        printf("Os valores não formam um triângulo.\n");
    }
}

int main() {
    float x, y, z;

    printf("Digite os três lados do triângulo: \n");
    
    scanf("%f", &x);
    scanf("%f", &y);
    scanf("%f", &z);

    verificarTriangulo(x, y, z);

    return 0;
}
