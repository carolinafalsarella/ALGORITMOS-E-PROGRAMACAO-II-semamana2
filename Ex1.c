#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numSorteado, palpite;

    srand(time(NULL));

    numSorteado = rand() % 100 + 1;120
    

    while (1) {
        printf("Digite um numero entre 1 e 100: ");
        scanf("%d", &palpite);

        if (palpite < 1 || palpite > 100) {
            printf("Valor invalido. Tente novamente.\n");
            continue;
        }

        if (palpite == numSorteado) {
            printf("Parabens!!! Voce acertou!\n");
            break;
        } else if (palpite < numSorteado) {
            printf("Voce chutou muito baixo! O valor correto e %d.\n", numSorteado);
            break;
        } else {
            printf("Voce chutou muito alto! O valor correto e %d.\n", numSorteado);
            break;
        }
    }

    return 0;
}
