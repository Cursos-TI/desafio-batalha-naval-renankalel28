#include <stdio.h>  

#define COLUNA 10
// Número de colunas do tabuleiro
#define LINHA 10
// Número de linhas do tabuleiro

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

    // Definindo o centro da cruz
    int linhaCentro = 1;
    int colunaCentro = 5;

    // Cruz ocupa 3 linhas (1 acima + centro + 1 abaixo)
    for (int i = linhaCentro - 1; i <= linhaCentro + 1; i++) {
        if (i >= 0 && i < LINHA) { // garante que não sai da matriz
            tabuleiro[i][colunaCentro] = 5;
        }
    }

    // Cruz ocupa 5 colunas (2 à esquerda + centro + 2 à direita)
    for (int j = colunaCentro - 2; j <= colunaCentro + 2; j++) {
        if (j >= 0 && j < COLUNA) {
            tabuleiro[linhaCentro][j] = 5;
        }
    }
//definindo o centro do triangulo
    int linhaCentro2 = 8;
    int colunaCentro2 = 2;   
    // parte superior do triangulo
    for (int i = linhaCentro2 - 1; i <= linhaCentro2 + 1; i++) {
        if (i >= 0 && i < LINHA) { // garante que não sai da matriz
            tabuleiro[i][colunaCentro2] = 5;
        }
    }
    // parte inferior do triangulo
    for (int j = colunaCentro2 - 1; j <= colunaCentro2 + 1; j++) {
        if (j >= 0 && j < COLUNA) {
            tabuleiro[linhaCentro2][j] = 5;
        }
    }
    // base do triangulo
for (int j = colunaCentro2 - 2; j <= colunaCentro2 + 2; j++) {
    if (j >= 0 && j < COLUNA && linhaCentro2 + 1 < LINHA) {
        tabuleiro[linhaCentro2 + 1][j] = 5;
    }
}

//definindo o centro do octaedro
    int linhaCentro3 = 4;
    int colunaCentro3 = 1;

       // octaedro ocupa 3 linhas (1 acima + centro + 1 abaixo)
    for (int i = linhaCentro3 - 1; i <= linhaCentro3 + 1; i++) {
        if (i >= 0 && i < LINHA) { // garante que não sai da matriz
            tabuleiro[i][colunaCentro3] = 5;
        }
    }

    // octaedro ocupa 3 colunas (1 à esquerda + centro + 1 à direita)
    for (int j = colunaCentro3 - 1; j <= colunaCentro3 + 1; j++) {
        if (j >= 0 && j < COLUNA) {
            tabuleiro[linhaCentro3][j] = 5;
        }
    }

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
