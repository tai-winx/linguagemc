#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");

    int linha = 1;
    int total_linhas = 20;

    while (linha <= total_linhas) {
        // Imprimir espaços para centralizar
        int espaco = 1;
        while (espaco < linha) {
            printf(" ");
            espaco++;
        }

        // Imprimir '♫'s
        int coluna = total_linhas - linha + 1;
        int contador = 1;
        while (contador <= coluna) {
            printf("♫♥");
            contador++;
        }

        printf("\n");
        linha++;
    }

    return 0;
}