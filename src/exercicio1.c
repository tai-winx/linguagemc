#include <stdio.h>
#include <stdlib.h>

//Faça um programa que leia um número inteiro positivo N e imprima todos os 
//números naturais de 0 até N em ordem crescente.

int main() {
    int n;

    // Solicita ao usuário que digite um número
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    // Verifica se o número é positivo
    if(N < 0) {
        printf("Por favor, digite um número positivo.\n");} 
    
    else{
        printf("Números de 0 até %d:\n", n);
        for(int i = 0; i <= n; i++){
            printf("%d\n", i);
        }
    }

    return 0;

}