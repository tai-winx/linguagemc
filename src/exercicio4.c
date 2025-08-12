#include <stdio.h>
#include <stdlib.h>

//Faça um programa que exiba a soma de todos os números naturais abaixo de 
//1.000 que são múltiplos de 3 ou 5.

int main(){
    system("clear");

    int i;
    int soma = 0;

    for (int i = 1; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            printf("%d + %d = ", soma,i);
            soma += i;
            printf("%d\n", soma);
        }
    }

    printf("A soma dos múltiplos de 3 ou 5 abaixo de 1000 é: %d\n", soma);

    return 0;
}


