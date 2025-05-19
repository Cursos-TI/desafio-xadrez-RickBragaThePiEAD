#include <stdio.h>
 
int main() {
    int i = 5;
   
    while (i >= 0) {
        printf("%d\n", i);
        i--;
    }
    
    int num = i;
    
    while(num >= 0){
        printf("Você digitou: %d\n", num);
        printf("Digite o próximo número:");
        scanf("%d", &num);
    }

    printf("Você digitou um número negativo: %d - Encerrando o programa!", num);

    return 0;
}