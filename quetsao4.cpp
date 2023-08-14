#include <stdio.h>

int isPerfect(int num) {
    int sum = 0;
    
    // Verifica todos os possíveis fatores até a metade do número
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    
    // Verifica se a soma dos fatores é igual ao número
    if (sum == num) {
        return 1; // É um número perfeito
    } else {
        return 0; // Não é um número perfeito
    }
}

int main() {
    printf("Números perfeitos entre 1 e 1000:\n");
    
    for (int i = 1; i <= 1000; i++) {
        if (isPerfect(i)) {
            printf("%d: 1", i);
            
            // Imprime os fatores do número perfeito
            for (int j = 2; j <= i / 2; j++) {
                if (i % j == 0) {
                    printf(" + %d", j);
                }
            }
            
            printf(" = %d\n", i);
        }
    }
    
    return 0;
}
