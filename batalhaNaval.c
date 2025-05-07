#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    
    printf("Novo commit\n");

    // Vetor com letras para o cabeçalho horizontal (A a J)
    char letras[10] = {'A','B','C','D','E','F','G','H','I','J'};

    // Matriz 10x10 para representar o tabuleiro, preenchida com 0 (água)
    int tabuleiro[10][10];

    // Tamanho dos navios
    int tamanhoNavio = 3;

    // Inicializa a matriz com 0 (água)
    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            tabuleiro[linha][coluna] = 0;
        }
    }

    // Posiciona navio horizontal na linha 2, coluna 4 (linha 3, coluna E)
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[2][4 + i] = 3;
    }

    // Posiciona navio vertical na linha 5, coluna 1 (linha 6, coluna B)
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[5 + i][1] = 3;
    }

    // Título do jogo
    printf("================================\n");
    printf("=      JOGO BATALHA NAVAL      =\n");
    printf("================================\n");

    // Imprime letras no topo
    printf("   ");
    for (int i = 0; i < 10; i++) {
        printf(" %c ", letras[i]);
    }
    printf("\n");

    // Imprime tabuleiro com números na lateral
    for (int linha = 0; linha < 10; linha++) {
        printf("%2d", linha + 1); // Números de 1 a 10
        for (int coluna = 0; coluna < 10; coluna++) {
            if (tabuleiro[linha][coluna] == 0) {
                printf(" 0 ");
            } else if (tabuleiro[linha][coluna] == 3) {
                printf(" 3 ");
            }
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}
