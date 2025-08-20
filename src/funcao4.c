#include <stdio.h>
#include <stdlib.h>
# include "../lib/funcao4.h"

int main(){
    int x = 30;
    printf("valor no main\n%d - %p\n", x, &x);

    valor1(x);
    printf("\n");

    
    valor2(&x);
    printf("\n");

    return 0;
} 