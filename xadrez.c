#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Movimentação da TORRE recursivamente
void moverTorreRecursivo(int casas)
{
    if (casas > 0)
    {
        printf("Direita \n");
        moverTorreRecursivo(casas - 1);
    }
}

// Movimentação da BISPO recursivamente
void moverBispoRecursivo(int casas)
{
    if (casas > 0)
    {
        printf("Diagonal Cima Direita \n");
        moverBispoRecursivo(casas - 1);
    }
}

// Movimentação da RAINHA recursivamente
void moverRainhaRecursivo(int casas)
{
    if (casas > 0)
    {
        printf("Esquerda \n");
        moverRainhaRecursivo(casas - 1);
    }
}

// Movimento do CAVALO com loops Aninhados
void moverCavaloLoopsComplexos()
{
    printf("Movimento do CAVALO(2 casas para cima, 1 casa para a direita):\n");
    for (int cima = 1; cima <= 2; cima++)
    {
        printf("Cima \n");
        for (int direita = 1; direita <= 1; direita++)
        {
            if (cima == 2 && direita == 1)
            {
                printf("Direita \n");
            }
        }
        printf("\n");
    }
}

void moverBispoLoopsAninhados(int casas)
{
    printf("Movimento do BISPO(Diagonal Cima Direita com loops Aninhados):\n");
    for (int vertical = 1; vertical <= casas; vertical++)
    {
        printf(" Cima (Vertical)\n");
        for (int horizontal = 1; horizontal <= casas; horizontal++)
        {
            if (vertical == horizontal)
            {
                printf(" Direita (Horizontal)\n");
            }
            break;
        }
    }
}

int main()
{
    int numeroCasas = 5; // Numeros de casas para Torre, Bispo(recursivamente)

    // Movimento da TORRE
    printf("Movimento da TORRE(%d casas para a direita - Recursão):\n", numeroCasas);
    moverTorreRecursivo(numeroCasas);

    printf("\n"); // Linha em branco para separar movimentos

    //Moviemntação do BISPO recursivo

    printf("Movimento do BISPO(%d casas na Diagonal  Cima direita - Recursão):\n", numeroCasas);

    moverBispoRecursivo(numeroCasas);

    printf("\n"); // Linha em branco para separar movimentos

    // Movimentação da RAINHA
    int numerosCasasRainha = 8; // Numero de casas para a rainha
    printf("Movimento da RAINHA (8 casas para a esquerda):\n");

    moverRainhaRecursivo(numerosCasasRainha);

    printf("\n"); // Linha em branco para separar movimentos

    // Movimentação do Cavalo
    moverCavaloLoopsComplexos();
    printf("\n"); // Linha em branco para separar movimentos

    // Movimentação do Bispo com loops Aninhados
    int numerosCasasBispoAninhado = 5;
    moverBispoLoopsAninhados(numerosCasasBispoAninhado);
    printf("\n"); // Linha em branco para separar movimentos
    
    return 0;
}