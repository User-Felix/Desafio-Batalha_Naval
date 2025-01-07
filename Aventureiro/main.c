#include <stdio.h>

#define TAMANHO 10 // Define o tamanho do tabuleiro
#define NAVIO 3    // Valor numérico que representa partes de um navio
#define VAZIO 0    // Valor numérico que representa posições vazias

int main() {
    // Declaração da matriz para o tabuleiro
    int tabuleiro[TAMANHO][TAMANHO] = {0};

    // Posicionamento manual dos navios:
    // Navio horizontal
    for (int i = 2; i < 6; i++) {
        tabuleiro[2][i] = NAVIO;
    }

    // Navio vertical
    for (int i = 4; i < 8; i++) {
        tabuleiro[i][5] = NAVIO;
    }

    // Navio diagonal 1 (de cima para baixo)
    for (int i = 0; i < 4; i++) {
        tabuleiro[i][i] = NAVIO;
    }

    // Navio diagonal 2 (de baixo para cima)
    for (int i = 0; i < 4; i++) {
        tabuleiro[9 - i][i] = NAVIO;
    }

    // Exibição do tabuleiro
    printf("Tabuleiro:\n\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
