#include <stdio.h>

int main() {

    //Pirâmide de letras
    int i, j;
    char letra = 'A';
    for (i = 0; i < 5; i++) {
        for (j = 0; j <= i; j++) {
            printf("%c ", letra + j);
            }
        printf("\n");
        }
        return 0;
    }