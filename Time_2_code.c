#include <stdio.h>

int main() {
    // Time 2 Code Novato
    // Usando o for para calcular a tabuada de um número
    int num;
    printf("Digite o núero que você quer ver a sua tabuada: ");
    scanf("%d", &num);
    printf("Tabuada do %d\n", num);
    for (int i = 0; i <= 10; i++){
        printf("%d x %d = %d\n", num, i, num * i);
    }
    printf("\n");
    
    // Usando o while e o if para imprimir os números ímpares entre 0 e 10
    int i = 0;
    while (i <= 10){
        if (i % 2 != 0){
            printf("%d\n", i);
        }
        i++;
    }
   
    // Digitando um número par para sair do programa
    int numero;
    do {
        printf("Digite um número par para sair do programa: ");
        scanf("%d", &numero);
        if (numero % 2 == 0){
        printf("%d é par!\n", numero);
        } else {
        printf("%d não é impar!\n", numero);
        }
    } while (numero % 2 != 0);

    printf("Você digitou um número par, o programa vai sair!\n");
    
    //Time 2 Code Aventureiro
    //Pirâmide de letras
    int i, j;
    char letra = 'A';
    for (i = 0; i < 5; i++) {
        for (j = 0; j <= i; j++) {
            printf("%c ", letra + j);
            }
        printf("\n");
        }
     
    //Time 2 code Mestre
    
     
     
     
    return 0;
}