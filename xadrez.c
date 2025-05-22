#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Nível Mestre: Funções Recursivas
void movimentoBispo(int casas) {
    if (casas > 0) {
        printf("[%d] (CIMA DIREITA) ", casas);
        movimentoBispo(casas - 1);
    }
}

void movimentoTorre(int casas) {
    if (casas > 0) {
        printf("[%d] (DIREITA) ", casas);
        movimentoTorre(casas - 1);
    }
}

void movimentoRainha(int casas) {
    if (casas > 0) {
        printf("[%d] (ESQUERDA) ", casas);
        movimentoRainha(casas - 1);
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int MOVIMENTO_TORRE = 5; //Move-se em linha reta horizontalmente. Cinco casas para a direita.
    const int MOVIMENTO_BISPO = 5; // Move-se em linha reta diagonalmente. Cinco casas para a diagonal (cima e direita).
    const int MOVIMENTO_RAINHA = 8; // Move-se em linha reta horizontalmente. Oito casas para a esquerda.
    const int MOVIMENTO_CAVALO = 3; // Move-se em L. Duas casas para baixo e uma casa para a esquerda.
    
    printf("Movimentação das peças de xadrez:\n");
    printf("=================================\n");
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    int i=1;
    printf("Movendo a torre (cinco casas para a direita): \n");
    printf("TORRE ");
        while (i <= MOVIMENTO_TORRE) {
        printf("[%d] (==>) ", i);
        i++;
        } 
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    int a = 1;
    printf("\nMovendo o bispo (Cinco casas para a diagonal (cima e direita): \n");	
    printf("BISPO ");
    do
    {
        printf("[%d] (^ =>) ", a);
        a++;

    } while (a <= MOVIMENTO_BISPO);
        
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    int b;
    printf("\nMovendo a rainha (Oito casas para a esquerda): \n");
    printf("RAINHA ");
    for (b = 1; b <= MOVIMENTO_RAINHA; b++) {
        printf("[%d] (<==) ", b);
    }
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    
    printf("\nMovendo o cavalo (Move-se em L. Duas casas para baixo e uma casa para a esquerda): \n");
    printf("CAVALO ");
    for (int c = 1; c <= MOVIMENTO_CAVALO; c++) {
        while (c <= 2) {
            printf("[%d] (V) ", c);
            c++;   
        }
        printf("[%d] (<==) ", c);
        }
    printf("\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    printf("\nMovimentação das peças de xadrez (Funções Recursivas):\n");
    printf("=================================\n");
    
    printf("Movendo a TORRE (cinco casas para a direita): \n");
    movimentoTorre(MOVIMENTO_TORRE);
    printf("\n");
    
    printf("\nMovendo o BISPO (Cinco casas para a diagonal (cima e direita): \n");
    movimentoBispo(MOVIMENTO_BISPO);
    printf("\n");
    
    printf("\nMovendo a RAINHA (Oito casas para a esquerda): \n");
    movimentoRainha(MOVIMENTO_RAINHA);
    printf("\n");

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops
    // Utilize loops aninhados com múltiplas variáveis e/ou condições para simular 
    // o movimento do Cavalo em "L" (duas casas para cima e uma para a direita).
    // Você pode usar continue e break para controlar o fluxo do loop de forma mais precisa.
    printf("\nMovendo o CAVALO (Move-se em L. Duas casas para cima e uma casa para a direita): \n");
    const int MOVIMENTO_CAVALO_TOTAL = 3; // O movimento L é composto de 3 "segmentos" (2 em um eixo, 1 no outro)
    const int MOVIMENTO_CAVALO_DIREITA = 1; // Movimento horizontal
    const int MOVIMENTO_CAVALO_CIMA = 2; // Movimento vertical

    // Movimentação do Cavalo
    int c, d;


    for (c = 1; c <= MOVIMENTO_CAVALO_CIMA; c++) {
        for (d = 1; d < MOVIMENTO_CAVALO_TOTAL; d++) {
            if (d <= MOVIMENTO_CAVALO_CIMA) {
                continue;
            }
        }
        if (c > MOVIMENTO_CAVALO_CIMA) {
            break;
        }
    printf(" [%d] (CIMA) ", c);
    }
    printf(" [%d] (DIREITA) \n", d);
    printf("\n=================================\n");
return 0;
    
}