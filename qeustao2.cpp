#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

int diasNoMes(int mes, int ano) {
    int dias;
    
    switch (mes) {
        case 2:
            if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
                dias = 29;
            } else {
                dias = 28;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            dias = 30;
            break;
        default:
            dias = 31;
            break;
    }
    
    return dias;
}

int diasDeAula(Data hoje, Data ultimoDia) {
    int dias = 0;
    
    while (hoje.dia != ultimoDia.dia || hoje.mes != ultimoDia.mes || hoje.ano != ultimoDia.ano) {
        if (hoje.dia <= diasNoMes(hoje.mes, hoje.ano)) {
            hoje.dia++;
        } else {
            hoje.dia = 1;
            if (hoje.mes == 12) {
                hoje.mes = 1;
                hoje.ano++;
            } else {
                hoje.mes++;
            }
        }
        
        dias++;
    }
    
    return dias;
}

int main() {
    Data hoje = {1, 1, 2022};
    Data ultimoDia = {31, 5, 2022};
    
    int quantidadeAulas = diasDeAula(hoje, ultimoDia);
    
    printf("Quantidade de aulas de laboratório: %d\n", quantidadeAulas);
    
    return 0;
}
