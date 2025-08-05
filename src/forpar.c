#include <stdio.h>
#include <stdlib.h>

int main(){
    system ("Clear");
    int i, inicial, final;

    printf("Digite um número e tecle Enter\n");
    scanf( "%d",&inicial);
    printf("Digite um valor final\n");
    scanf("%d", &final);

  
    for(int i = 1; i <= final; i++){
    if(i % 2 == 0){

    printf("O número %d é PAR\n!",i);

    
    }
}

    return 0;

}