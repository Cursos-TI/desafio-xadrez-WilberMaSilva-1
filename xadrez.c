#include <stdio.h>

// Função recursiva para mover o bispo cinco casas para diagonal direita para cima
void mover_bispo(int passos) {
    if (passos == 0) return;
    printf("Cima, Direita\n");
    mover_bispo(passos - 1);
}

// Função recursiva para mover a torre cinco casas para a direita
void mover_torre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    mover_torre(passos - 1);
}

// Função recursiva para mover a rainha oito casas para a esquerda
void mover_rainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    mover_rainha(passos - 1);
}

// Função para movimentação do cavalo em L (duas casas para cima e uma para a direita)
void mover_cavalo() {
    int i = 0, j = 0;
    for (i = 0; i < 2; i++) {
        printf("Cima\n");
    }
    for (j = 0; j < 1; j++) {
        printf("Direita\n");
    }
}

int main() {
    printf("Movimentação do bispo:\n");
    mover_bispo(5);
    
    printf("\nMovimentação da torre:\n");
    mover_torre(5);
    
    printf("\nMovimentação da rainha:\n");
    mover_rainha(8);
    
    printf("\nMovimentação do cavalo:\n");
    mover_cavalo();
    
    return 0;
}
fim