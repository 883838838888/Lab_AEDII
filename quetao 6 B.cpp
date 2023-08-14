#include <stdio.h>

int inverterNumeroRecursivo(int numero) {
    if (numero == 0) {
        return 0;
    }
    
    int ultimoDigito = numero % 10;
    int numeroInvertido = inverterNumeroRecursivo(numero / 10);
    
    return ultimoDigito * 10 + numeroInvertido;
}

int main() {
    int numero = 1234;
    int numeroInvertido = inverterNumeroRecursivo(numero);
    
    printf("O número invertido é: %d\n", numeroInvertido);
    
    return 0;
}
