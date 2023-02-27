

#include <stdio.h>

int main() {
    int numero, soma = 0;

    printf("Escreva um número inteiro: ");
    scanf("%d", &numero);

    for(int i = 1; i < numero; i++) {
        if(numero % i == 0) {
            soma += i;
        }
    }

    if(soma == numero) {
        printf("%d é um número inteiro perfeito\n", numero);
    } else {
        printf("%d NÃO é um número inteiro perfeito\n", numero);
    }

    return 0;
}