#include <stdio.h>
#include <stdlib.h>

#define SIZE 10  // Dimensão do tabuleiro

void exibirMatriz(int matriz[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void habilidadeCone(int matriz[SIZE][SIZE], int centroX, int centroY) {
    // Zera a matriz
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matriz[i][j] = 0;
        }
    }

    // Define a área afetada em formato de cone
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (i >= centroX && abs(j - centroY) <= i - centroX) {
                matriz[i][j] = 1;
            }
        }
    }
}

void habilidadeCruz(int matriz[SIZE][SIZE], int centroX, int centroY) {
    // Zera a matriz
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matriz[i][j] = 0;
        }
    }

    // Define a área afetada em formato de cruz
    for (int i = 0; i < SIZE; i++) {
        matriz[i][centroY] = 1; // Linha vertical
    }
    for (int j = 0; j < SIZE; j++) {
        matriz[centroX][j] = 1; // Linha horizontal
    }
}

void habilidadeOctaedro(int matriz[SIZE][SIZE], int centroX, int centroY, int alcance) {
    // Zera a matriz
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matriz[i][j] = 0;
        }
    }

    // Define a área afetada em formato de octaedro
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (abs(i - centroX) + abs(j - centroY) <= alcance) {
                matriz[i][j] = 1;
            }
        }
    }
}

int main() {
    int matriz[SIZE][SIZE];

    printf("\nHabilidade em Cone:\n\n");
    habilidadeCone(matriz, 2, 4); // Centro do cone
    exibirMatriz(matriz);

    printf("\nHabilidade em Cruz:\n\n");
    habilidadeCruz(matriz, 4, 4); // Centro da cruz
    exibirMatriz(matriz);

    printf("\nHabilidade em Octaedro:\n\n");
    habilidadeOctaedro(matriz, 4, 4, 2); // Centro e alcance do octaedro
    exibirMatriz(matriz);

    return 0;
}
