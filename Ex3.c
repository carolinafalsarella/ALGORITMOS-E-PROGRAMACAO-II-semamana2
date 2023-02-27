#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numSorteado, palpite, numTentativas = 0;

    srand(time(NULL)); 
    numSorteado = rand() % 100 + 1;

    while (numTentativas < 5) {
        printf("Digite um palpite (entre 1 e 100): ");
        scanf("%d", &palpite);
        
        if (palpite < 1 || palpite > 100) {
            printf("Valor inválido. Tente novamente.\n");
            continue;
        }

        numTentativas++;

        if (palpite == numSorteado) {
            printf("Parabéns!!! Você acertou em %d tentativa(s).\n", numTentativas);
            return 0;
        } else if (palpite < numSorteado) {
            printf("Você chutou muito baixo! Tente novamente.\n");
        } else {
            printf("Você chutou muito alto! Tente novamente.\n");
        }
    }

    printf("Você excedeu o número máximo de tentativas. O número sorteado era %d.\n", numSorteado);

    return 0;
}
