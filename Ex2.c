#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numSorteado, palpite, tries = 0;
    srand(time(NULL));
    numSorteado = rand() % 100 + 1;

    printf("Adivinhe o número sorteado entre 1 e 100:\n");

    do {
        scanf("%d", &palpite);
        tries++;

        if (palpite < 1 || palpite > 100) {
            printf("Valor inválido! Digite um número entre 1 e 100:\n");
            tries--;
            continue;
        }

        if (palpite == numSorteado) {
            printf("Parabéns! Você acertou em %d tentativas!\n", tries);
            return 0;
        } else if (palpite < numSorteado) {
            printf("Você chutou muito baixo! Tente novamente:\n");
        } else {
            printf("Você chutou muito alto! Tente novamente:\n");
        }
    } while (1);

    return 0;
}
