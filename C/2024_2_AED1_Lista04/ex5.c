/*

5. Escreva uma função que receba como parâmetro um valor n inteiro positivo,
calcule e retorne o valor da soma S, definida pela equação abaixo:

S = 2/4 + 5/5 + 10/6 + 17/7 + 26/8 + ... + (n^2 + 1) / (n + 3)

*/


#include <stdio.h>

// Calcular o valor de S
float calcularS(int n) {
    float S = 0.0;
    int numerador, denominador;
    
    for (int i = 1; i <= n; i++) {
        numerador = i * i + 1;
        denominador = i + 3;
        S += (float) numerador / denominador;
    }
    
    return S;
}

int main() {
    int num;
    
    printf("Digite um valor inteiro positivo para n: ");
    scanf("%d", &num);
    
    if (num <= 0) {
        printf("Por favor, insira um valor inteiro positivo.\n");
        return 0;
    }
    
    float resultado = calcularS(num);
    
    printf("O valor de S para n = %d é: %.6f\n", num, resultado);
    
    return 0;
}
