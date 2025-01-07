#include <stdio.h>

#define TAM_TABULEIRO 10  // Define o tamanho do tabuleiro como uma constante
#define TAM_NAVIO 3       // Define o tamanho fixo dos navios como 3

int main() {
    // Declaração da matriz que representa o tabuleiro
    int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO] = {0};

    // Definição do primeiro navio (orientação horizontal)
    int navio_horizontal[TAM_NAVIO][2] = {{2, 2}, {2, 3}, {2, 4}};
    
    // Colocar as partes do navio no tabuleiro
    for (int i = 0; i < TAM_NAVIO; i++) {
        int x = navio_horizontal[i][0];
        int y = navio_horizontal[i][1];
        tabuleiro[x][y] = 1; // Marca a posição do navio no tabuleiro
        printf("Parte do navio horizontal posicionada na casa (%d, %d)\n", x, y);
    }

    // Definição do segundo navio (orientação vertical)
    int navio_vertical[TAM_NAVIO][2] = {{5, 5}, {6, 5}, {7, 5}};

    // Colocar as partes do navio no tabuleiro
    for (int i = 0; i < TAM_NAVIO; i++) {
        int x = navio_vertical[i][0];
        int y = navio_vertical[i][1];
        tabuleiro[x][y] = 1; // Marca a posição do navio no tabuleiro
        printf("Parte do navio vertical posicionada na casa (%d, %d)\n", x, y);
    }

    // Exibição final do tabuleiro para referência
    printf("\nTabuleiro atualizado:\n");
    for (int i = 0; i < TAM_TABULEIRO; i++) {
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
