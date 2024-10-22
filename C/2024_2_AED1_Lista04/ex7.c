/*

7. Implemente um programa em C que leia dois inteiros, armazenando-os em variáveis. O
programa deve comparar os endereços das variáveis e exibir o maior deles.

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;

    printf("Digite o primeiro número:\n");
    scanf("%d", &a);
    printf("Digite o segundo número:\n");
    scanf("%d", &b);

    if (&a > &b) {
        printf("O endereço da variável 'a' é maior que o da variável 'b'.\n");
    } else if (&b > &a) {
        printf("O endereço da variável 'b' é maior que o da variável 'a'.\n");
    } else {
        printf("Os endereços de 'a' e 'b' são iguais.\n");
    }

    return 0;
}
