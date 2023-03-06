#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int num, fib1 = 0, fib2 = 1, fib3;
    bool found = false;

    // Leitura do número informado pelo usuário
    printf("Digite um número: ");
    scanf("%d", &num);

    // Cálculo da sequência de Fibonacci até o número informado
    while (fib2 <= num) {
        if (fib2 == num) {
            found = true;
            break;
        }
        fib3 = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib3;
    }

    // Verificação se o número informado pertence ou não à sequência
    if (found) {
        printf("%d pertence à sequência de Fibonacci.\n", num);
    } else {
        printf("%d não pertence à sequência de Fibonacci.\n", num);
    }

    return 0;
}