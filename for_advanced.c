#include <stdio.h>

//Recursividade
void recursivo(int numero) {
    if(numero >= 0) {
        printf("%d ", numero);
        recursivo(numero - 1);
    }
}

int main() {

    //Formas avançadas de declarar loops
    for (int i = 0, j = 10; i < j; i++, j--) {

        printf("i: %d, j: %d \n", i, j);
    }
    printf("\n");

    //Loops com condições múltiplas
    for (int i = 0, j = 10; i <= 5 && j >= 5; i++, j--) {

        printf("i: %d, j: %d \n", i, j);
    }
    printf("\n");

    //Loops com atualizações complexas usando operadores ternários
    printf("i = { ");
    for (int i = 0; i < 100; i += (i % 2 == 0) ? 1 : 2) {
        printf("%d ", i);
    }   
    printf(" }\n");
    printf("\n");

    //Uso de continue e break
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            continue; // Pula o número 5
        }
        if (i == 6) {
            break; // Para o loop quando i é 8
        }
        printf("%d ", i);
    }
    printf("\n");

    //Recursividade
    int n = 10;
    printf("\nContagem recursiva: ");
    recursivo(n);
    printf("\n");
return 0;
}