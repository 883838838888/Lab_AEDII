#include <stdio.h>

void encontrarTriplosPitagoricos(int limite) {
    int cateto1, cateto2, hipotenusa;

    for (cateto1 = 1; cateto1 <= limite; cateto1++) {
        for (cateto2 = cateto1; cateto2 <= limite; cateto2++) {
            for (hipotenusa = cateto2; hipotenusa <= limite; hipotenusa++) {
                if (cateto1 * cateto1 + cateto2 * cateto2 == hipotenusa * hipotenusa) {
                    printf("Cateto1: %d, Cateto2: %d, Hipotenusa: %d\n", cateto1, cateto2, hipotenusa);
                }
            }
        }
    }
}

int main() {
    int limite;

    printf("Digite o limite: ");
    scanf("%d", &limite);

    encontrarTriplosPitagoricos(limite);

    return 0;
}
