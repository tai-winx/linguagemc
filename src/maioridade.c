#include <stdio.h>

int main(){
    int idade;
    printf("Digite sua idade e tecle Enter\n");
    scanf( "%d",&idade);

    if(idade > 17){
    printf("Esta autorizado para entrar\n");}
    
    else{
        printf("Não esta autorizado para entrar\n");}

    return 0;

}