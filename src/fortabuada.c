#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int i , num;
    printf("Digite um número para tabuada\n");
    scanf("%d", &num);
    for(i = 1 ; i <= 10 ; i++){
        printf ("%d x %d = %d\n" , num, i , (num*1));
    }
    return 0;
}