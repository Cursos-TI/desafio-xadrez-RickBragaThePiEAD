#include <stdio.h>

int main() {

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

    return 0;
}