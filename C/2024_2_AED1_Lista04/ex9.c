/*

9. Implemente um procedimento chamado primo que recebe como parâmetro um inteiro m,
passado por valor, e dois outros inteiros, p1 e p2, passados por referência. O procedimento deve
armazenar em p1 o maior número primo menor do que m e deve armazenar em p2 o menor
número primo maior do que m.
Implemente também uma função main que solicita ao usuário o valor de m, chama o
procedimento primo e depois imprime o resultado.

*/

#include <stdio.h>
#include <stdbool.h>

// Função que verifica se um número é primo
bool ehPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Procedimento que encontra primos em relação a m
void primo(int m, int *p1, int *p2) {

    for (int i = m - 1; i > 1; i--) {
        if (ehPrimo(i)) {
            *p1 = i;
            break;
        }
    }

    for (int i = m + 1;; i++) {
        if (ehPrimo(i)) {
            *p2 = i;
            break;
        }
    }
}

int main() {
    int m, maiorPrimo, menorPrimo;

    printf("Digite um valor inteiro m: ");
    scanf("%d", &m);

    primo(m, &maiorPrimo, &menorPrimo);

    printf("Maior primo menor que %d: %d\n", m, maiorPrimo);
    printf("Menor primo maior que %d: %d\n", m, menorPrimo);

    return 0;
}
