// Ex 22
#include <stdio.h>

int main() {
    int tabuleiro[3][3];
    int linha, coluna, vez = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    for (int i = 0; i < 9; i++) {
        printf("\n\n");
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                printf("%d ", tabuleiro[j][k]);
            }
            printf("\n");
        }

        if (i % 2 == 0) {
            printf("\nVez do jogador A! Informe a posição da jogada (linha coluna de 0 a 2):\n");
            vez = 0;
        } else {
            printf("\nVez do jogador B! Informe a posição da jogada (linha coluna de 0 a 2):\n");
            vez = 1;
        }

        do {
            scanf("%d %d", &linha, &coluna);

            if (linha < 0 || linha > 2 || coluna < 0 || coluna > 2) {
                printf("Posição inválida! Linha e coluna devem ser entre 0 e 2.\n");
            } else if (tabuleiro[linha][coluna] == 0) {
                if (vez == 0) {
                    tabuleiro[linha][coluna] = -1;
                    vez = 3;
                } else if (vez == 1) {
                    tabuleiro[linha][coluna] = 1;
                    vez = 3;
                }
            } else {
                printf("Campo já preenchido! Tente outra posição.\n");
            }
        } while (vez != 3);
    }
    
    printf("\n\n--- Jogo Finalizado ---\n");
    for (int j = 0; j < 3; j++) {
        for (int k = 0; k < 3; k++) {
            printf("%d ", tabuleiro[j][k]);
        }
        printf("\n");
    }

    return 0;
}
