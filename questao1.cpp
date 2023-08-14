#include <stdio.h>

int main() {
    int i;
    
    for(i = 0; i <= 127; i++) {
        if(i % 10 == 0 && i != 0) {
            printf("\n"); // Pular para a próxima linha a cada 10 caracteres
        }
        
        printf("%d: %c\t", i, i); // Imprimir o valor ASCII e o caractere correspondente
    }
    
    return 0;
}
