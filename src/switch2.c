#include <stdio.h>
#include <stdlib.h>

int main(){
    // Chamar o comando system ("clear") para limpar a tela do terminal
    system("clear");
    // Criar a variável do tipo char para guardar a operação matemática que poderá ser: + - * ou /
    char ch;
    // Criar variável para guaradar dois números para as operações matemáticas
    int a, b;

    printf("Digite uma operação matemática: + , - , * , / \n");
    // Vamos capturar o sinal digitado pelo usuário e alocar na variável ch. Usaremos o comando getchar, 
    // que vem da biblioteca stdlib caso você queira usar o scanf, poderia ser feito da seguinte forma: scanf ("&c",&ch);
    ch = getchar();
    printf("Digite dois núneros inteiros separados por Enter: \n");
    scanf("%d%d",&a,&b);
    switch (ch){
    case '+':{
        int c = a + b;
        printf("O resultado da soma é %d\n",c);}
        break;
    case '-':{
        int d = a - b;
        printf("O resultado da subtração é %d\n",d);}
        break;
    case '*':{
        int e = a * b;
        printf("O resultado da divisão é %d\n",e);}
        break;
    case '/':{
        int f = a / b;
        printf("O resultado da multiplicação é %d",f);}
        break;

default:
printf("Operação inválida\n");

}
return 0;
}

       

    

