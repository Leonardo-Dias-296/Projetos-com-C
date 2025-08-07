#include <stdio.h>

int main() {
    printf("\nBem vindo a Batalha Naval\n");
    printf("\nTabuleiro\n\n");

    char colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10] = {0};
    char coluna;
    int linha;

    while (1) {
        // Exibe o tabuleiro
        printf("  ");
        for (int c = 0; c < 10; c++) {
            printf(" %c", colunas[c]);
        }
        printf("\n");
        for (int i = 0; i < 10; i++) {
            printf("%d", i + 1);
            for (int j = 0; j < 10; j++) {
                printf(" %d", tabuleiro[i][j]);
            }
            printf("\n");
        }

        printf("Digite a coluna (A-J) para colocar o navio: \n");
        scanf(" %c", &coluna); // Espaço antes de %c para ignorar '\n'
        printf("Digite a linha (1-10) para colocar o navio: \n");
        scanf("%d", &linha);

        if (coluna >= 'A' && coluna <= 'J' && linha >= 1 && linha <= 10) {
            int col_idx = coluna - 'A';
            int lin_idx = linha - 1;
            tabuleiro[lin_idx][col_idx] = 3;
            printf("Navio colocado na coluna %c e linha %d\n", coluna, linha);
        } else {
            printf("Entrada invalida.\n");
        }
    }

    return 0;
}
