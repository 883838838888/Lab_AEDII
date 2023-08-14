#include <stdio.h>

int inverterNumeroNaoRecursivo(int numero) {
    int numeroInvertido = 0;
    
    while (numero != 0) {
        int ultimoDigito = numero % 10;
        numeroInvertido = numeroInvertido * 10 + ultimoDigito;
        numero /= 10;
    }
    
    return numeroInvertido;
}

int main() {
    int numero = 1234;
    int numeroInvertido = inverterNumeroNaoRecursivo(numero);
    
    printf("O número invertido é: %d\n", numeroInvertido);
    
    return 0;
}
