#include <stdio.h>  // Biblioteca padrão para entrada e saída
#define COLUNA 10 // Número de colunas do tabuleiro
#define LINHA 10 // Número de linhas do tabuleiro

int main() {
    // Vetor que representa os nomes das colunas do tabuleiro (A até J)
    char coluna[COLUNA] = {'A','B','C','D','E','F','G','H','I','J'};

    // Matriz 10x10 que representa o tabuleiro da batalha naval
    int tabuleiro[LINHA][COLUNA];

    // Inicializa todas as posições do tabuleiro com 0 (sem navio)
    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posição do navio 1 (horizontal na linha 7, colunas 4 a 6)
    tabuleiro[7][4] = 3;
    tabuleiro[7][5] = 3;
    tabuleiro[7][6] = 3;

    // Posição do navio 2 (vertical na coluna 8, linhas 3 a 5)
    tabuleiro[3][8] = 3;
    tabuleiro[4][8] = 3;
    tabuleiro[5][8] = 3;

    // Posição do navio 3 em diagonal (linhas 1 a 3, colunas 1 a 3)
    tabuleiro[1][1] = 3;
    tabuleiro[2][2] = 3;
    tabuleiro[3][3] = 3;

    // Posição do navio 4 em diagonal (linhas 6 a 8, colunas 6 a 8)
    tabuleiro[7][7] = 3;
    tabuleiro[8][8] = 3;
    tabuleiro[9][9] = 3;

    // Título do tabuleiro
    printf("Tabuleiro de Batalha Naval:\n\n");

    // Cabeçalho das colunas (A até J)
    printf("   "); // Espaço para alinhar com os números das linhas
    for (int j = 0; j < COLUNA; j++) {
        printf("%c ", coluna[j]);
    }
    printf("\n");

    // Impressão das linhas do tabuleiro
    for (int i = 0; i < LINHA; i++) {
        printf("%2d ", i); // Imprime o número da linha (0 a 9)
        for (int j = 0; j < COLUNA; j++) {
            printf("%d ", tabuleiro[i][j]); // Imprime o valor da célula (0 = vazio, 3 = navio)
        }
        printf("\n"); // Quebra de linha ao final de cada linha do tabuleiro
    }

    return 0; // Finaliza o programa
}
