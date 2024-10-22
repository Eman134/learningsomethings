/*

8. Faça um procedimento que leia 3 números inteiro (a, b, c). Para cada valor lido, mostre o
nome da variável, o endereço e o seu valor, conforme exemplificado a seguir:
NOME_VARIAVEL ENDEREÇO VALOR
a 0000fff0 5
b 0000fff4 9
c 0000fff8 1
Invoque o procedimento por meio do programa principal/main.

*/

#include <stdio.h>

// Procedimento para mostrar a tabela
void mostrarInformacoes(int a, int b, int c) {
    printf("NOME_VARIAVEL\tENDERECO\tVALOR\n");
    printf("a\t\t%p\t%d\n", &a, a);
    printf("b\t\t%p\t%d\n", &b, b);
    printf("c\t\t%p\t%d\n", &c, c);
}

int main() {
    int a, b, c;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);

    mostrarInformacoes(a, b, c);

    return 0;
}
