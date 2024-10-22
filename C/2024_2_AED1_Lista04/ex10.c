/*

10. Escreva um procedimento chamado teste que recebe um valor n passado “por valor” e dois
inteiros b e k passados “por referência". Seu procedimento deve armazenar em b e k valores
tais que bk = n e b seja o menor valor possível.

*/

#include <stdio.h>
#include <stdlib.h>

// Procedimento que encontra b e k tais que b * k = n e b é o menor possível
void teste(int n, int *b, int *k) {
    *b = n;
    *k = 1;

    // Percorre os possíveis valores de b
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            int temp_k = n / i;
            if (i < *b) {
                *b = i;
                *k = temp_k;
            }
        }
    }
}

int main() {
    int n, b, k;

    printf("Digite um valor inteiro n: ");
    scanf("%d", &n);

    teste(n, &b, &k);

    printf("Menor b: %d\n", b);
    printf("Valor de k: %d\n", k);

    return 0;
}

