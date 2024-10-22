/*

4. Escreva uma função que receba como parâmetro um valor n inteiro positivo, 
calcule e retorne o valor de E, definido pela equação abaixo:

E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/n!

O programa deve conter uma função para calcular o fatorial e uma função principal 
que leia do teclado o valor de n, chame a função que calcula E e exiba o resultado.

*/

#include <stdio.h>
#include <stdlib.h>

// Calcular o fatorial
int fatorial(int num) {
    int resultado = 1;
    for (int i = 1; i <= num; i++) {
        resultado *= i;
    }
    return resultado;
}

// Calcular o valor de E
float calcularE(int n) {
    float E = 1.0;
    
    for (int i = 1; i <= n; i++) {
        E += 1.0 / fatorial(i);
    }

    return E;
}

int main() {
    int n;

    printf("Digite um valor inteiro positivo para n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Por favor, insira um valor positivo.\n");
        return 0;
    }

    float resultado = calcularE(n);
    printf("O valor de E para n = %d é: %.10f\n", n, resultado);

    return 0;
}
