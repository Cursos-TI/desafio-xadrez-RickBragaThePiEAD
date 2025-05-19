#include <stdio.h>

// Loopings aninhados
// Multiplicação de 1 a 10
int main() {
    // for(int i = 1; i <= 10; i++) {
    //     for(int j = 1; j <= 10; j++) {
    //         printf("%d \t", i * j);
    //     }
    // printf("\n");
    // }

    // for(int a = 1; a<= 5; a++) {
    //     for(int b = 1; b <= 5; b++) {
    //         if ((a + b) % 5 == 0) {
    //             printf("\n(%d, %d)\n ", a, b);
    //         }
    //     }
    
    // }

    // // Desenhando um padrão
    // for (int i = 1; i <= 5; i++) {
    //     for(int j = 1; j <= i; j++) {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // Contagem regressiva
    // int s;

    // for (s = 10; s >=0; s--) {
    //     printf("%d\n ", s);
    //     for (int i = 0; i < 2000000000; i++) {
        
    //     }
    // }

    // printf("Buummm!\n\n");

    // Tabuada
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d \n", i, j, i * j);
        }
        printf("\n");
    }

return 0;   
}