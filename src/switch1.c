#include <stdio.h>
// Vamos incluir uma nova biblioteca de sistema que possui o comando clear
#include <stdlib.h>

int main(){
    // Vamos chamar a função de sistema para executar o comando clear (limpar a tela do terminal)
    system("Clear");
    int nummes;
    printf("========== Programa mês ==========\n");
    printf("\nPergunte ao programa. Qual é o mês de número: ");
    scanf("%d", &nummes);
    printf("\n\n=============================\n");

    switch(nummes){
        case 1:
        printf("\nJaneiro\n\n");
        break;

        case 2:
        printf("\nFevereiro\n\n");
        break;
        
        case 3:
        printf("\nMarço\n\n");
        break;

        case 4:
        printf("\nAbril\n\n");
        break;

        case 5:
        printf("\nMaio\n\n");
        break;

        case 6:
        printf("\nJunho\n\n");
        break;

        case 7:
        printf("\nJulho\n\n");
        break;

        case 8:
        printf("\nAgosto\n\n");
        break;

        case 9:
        printf("\nSetembro\n\n");
        break;

        case 10:
        printf("\nOutubro\n\n");
        break;

        case 11:
        printf("\nNovembro\n\n");
        break;

        case 12:
        printf("\nDezembro\n\n");
        break;

        default:
        printf("Este mês não existe\n");

    }
    return 0;
}