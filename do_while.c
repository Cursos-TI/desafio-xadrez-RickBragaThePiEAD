#include <stdio.h>

int main (){
    
    int i = 1;

    do{
        printf("%d, ", i);
        i++;

    } while (i <= 4);

    printf("%d.\n", i);

    int option;

    do{
        printf("Escolha a opçao abaixo:\n");
        printf("1. Opção 1\n");
        printf("2. Opção 2\n");
        printf("3. Opção 3\n");
        printf("0. Sair\n");
        scanf("%d", &option);

        switch (option){
            case 1:
                printf("Opçao 1 selecionada!\n");
                break;
            case 2:
                printf("Opçao 2 selecionada!\n");
                break;
            case 3:
                printf("Opçao 3 selecionada!\n");
                break;
            default:
                printf("Opçao inválida!\n");
                break;
                }
        } while (option != 0);

return 0;
}