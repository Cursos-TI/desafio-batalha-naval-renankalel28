#include <stdio.h>  // Biblioteca padrão para entrada e saída

int main() {
    // Vetor que representa os nomes das colunas do tabuleiro (A até J)
    char coluna[10] = {'A','B','C','D','E','F','G','H','I','J'};

    // Matriz 10x10 que representa o tabuleiro da batalha naval
    int tabuleiro[10][10];

    // Inicializa todas as posições do tabuleiro com 0 (sem navio)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
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

    // Título do tabuleiro
    printf("Tabuleiro de Batalha Naval:\n\n");

    // Cabeçalho das colunas (A até J)
    printf("   "); // Espaço para alinhar com os números das linhas
    for (int j = 0; j < 10; j++) {
        printf("%c ", coluna[j]);
    }
    printf("\n");

    // Impressão das linhas do tabuleiro
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i); // Imprime o número da linha (0 a 9)
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]); // Imprime o valor da célula (0 = vazio, 3 = navio)
        }
        printf("\n"); // Quebra de linha ao final de cada linha do tabuleiro
    }

    return 0; // Finaliza o programa
}
