#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
        // Simulação do movimento da TORRE (5 casas para a direita)
    // Utilizando o laço FOR
    printf("Movimento da TORRE(5 casas para a direita):\n");
    for (int i = 1; i <= 5; i++)
    {
        printf("Direita\n");
    }

    printf("\n");//Linha em branco para separar movimentos

    // Simulação do movimento da BISPO (5 casas na Diagonal e à direita)
    // Utilizando o laço WHILE
    printf("Movimento do BISPO(5 casas na Diagonal para Cima e à direita):\n");
    int j = 1;
    while (j <= 5)
    {
        printf("Diagonal e à direita\n");
        j++;
    }

    printf("\n");//Linha em branco para separar movimentos

    // Simulação do movimento da RAINHA (8 casas pra a esquerda)
    // Utilizando o laço DO-WHILE
    printf("Movimento da RAINHA (8 casas para a esquerda):\n");
    int k = 1;
    do
    {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    return 0;
}
