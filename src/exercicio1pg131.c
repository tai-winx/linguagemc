#include <stdio.h>
#include <stdlib.h>

//Faça um programa que possua um array de nome A que armazene seis números 
//inteiros. O programa deve executar os seguintes passos:

//a) Atribua os seguintes valores a esse array: 1, 0, 5, −2, −5, 7.


int main() {
    // a) Declaração e atribuição dos valores ao array A
    int A[6] = {1, 0, 5, -2, -5, 7};

    // Exibindo os valores para confirmar
    printf("Valores do array A:\n");
    for (int i = 0; i < 6; i++) {
        printf("A[%d] = %d\n", i, A[i]);
    }

    return 0;
}