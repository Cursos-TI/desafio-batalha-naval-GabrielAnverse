#include <stdio.h>

int main() {
    // Nível Novato - Posicionamento dos Navios
    printf("\n=== NIVEL NOVATO ===\n");
    
    // Declaração do tabuleiro 5x5
    int tabuleiro_novato[5][5] = {0};
    
    // Posicionamento do navio horizontal (tamanho 3) na linha 2 (índice 1)
    for (int j = 1; j < 4; j++) {
        tabuleiro_novato[1][j] = 1;
    }
    
    // Posicionamento do navio vertical (tamanho 3) na coluna 3 (índice 2)
    for (int i = 2; i < 5; i++) {
        tabuleiro_novato[i][2] = 1;
    }
    
    // Exibição das coordenadas dos navios
    printf("Coordenadas do navio horizontal (linha 2):\n");
    for (int j = 1; j < 4; j++) {
        printf("(2, %d) ", j + 1); // +1 para mostrar posições começando em 1
    }
    
    printf("\n\nCoordenadas do navio vertical (coluna 3):\n");
    for (int i = 2; i < 5; i++) {
        printf("(%d, 3) ", i + 1); // +1 para mostrar posições começando em 1
    }
    
    // Exibição do tabuleiro
    printf("\n\nTabuleiro (0=vazio, 1=navio):\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", tabuleiro_novato[i][j]);
        }
        printf("\n");
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    printf("\n=== NIVEL AVENTUREIRO ===\n");
    
    // Declaração do tabuleiro 10x10
    int tabuleiro_aventureiro[10][10] = {0};
    
    // Posicionamento dos navios
    // Navio horizontal (tamanho 4)
    for (int j = 3; j < 7; j++) {
        tabuleiro_aventureiro[2][j] = 3;
    }
    
    // Navio vertical (tamanho 4)
    for (int i = 5; i < 9; i++) {
        tabuleiro_aventureiro[i][8] = 3;
    }
    
    // Navio diagonal direita (tamanho 3)
    for (int k = 0; k < 3; k++) {
        tabuleiro_aventureiro[1+k][1+k] = 3;
    }
    
    // Navio diagonal esquerda (tamanho 3)
    for (int k = 0; k < 3; k++) {
        tabuleiro_aventureiro[1+k][8-k] = 3;
    }
    
    // Exibição do tabuleiro completo
    printf("Tabuleiro 10x10 (0=vazio, 3=navio):\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro_aventureiro[i][j]);
        }
        printf("\n");
    }

    // Nível Mestre - Habilidades Especiais com Matrizes
    printf("\n=== NIVEL MESTRE ===\n");
    
    // Declaração do tabuleiro 5x5 para habilidades (como nos exemplos)
    int habilidades[5][5] = {0};
    
    // Habilidade Cone
    printf("Habilidade Cone:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if ((i == 0 && j == 2) ||       // Topo do cone
                (i == 1 && j >= 1 && j <= 3) || // Meio
                (i == 2)) {                 // Base
                habilidades[i][j] = 1;
            } else {
                habilidades[i][j] = 0;
            }
            printf("%d ", habilidades[i][j]);
        }
        printf("\n");
    }
    
    // Habilidade Octaedro
    printf("\nHabilidade Octaedro:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if ((i == 0 && j == 2) ||       // Topo
                (i == 1 && j >= 1 && j <= 3) || // Meio
                (i == 2 && j == 2)) {      // Base
                habilidades[i][j] = 1;
            } else {
                habilidades[i][j] = 0;
            }
            printf("%d ", habilidades[i][j]);
        }
        printf("\n");
    }
    
    // Habilidade Cruz
    printf("\nHabilidade Cruz:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 2 || j == 2) {  // Linha ou coluna central
                habilidades[i][j] = 1;
            } else {
                habilidades[i][j] = 0;
            }
            printf("%d ", habilidades[i][j]);
        }
        printf("\n");
    }

    return 0;
}
