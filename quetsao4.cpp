#include <stdio.h>

int isPerfect(int num) {
    int sum = 0;
    
    // Verifica todos os poss�veis fatores at� a metade do n�mero
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    
    // Verifica se a soma dos fatores � igual ao n�mero
    if (sum == num) {
        return 1; // � um n�mero perfeito
    } else {
        return 0; // N�o � um n�mero perfeito
    }
}

int main() {
    printf("N�meros perfeitos entre 1 e 1000:\n");
    
    for (int i = 1; i <= 1000; i++) {
        if (isPerfect(i)) {
            printf("%d: 1", i);
            
            // Imprime os fatores do n�mero perfeito
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
