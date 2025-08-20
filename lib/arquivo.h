#include<stdio.h>
#include<stdlib.h>


char *criar(char *NomeArquivo, char *conteudo){
    FILE *arquivo;

    arquivo = fopen(NomeArquivo, "a");
    //fprintf(arquivo, conteudo);
    fputs(conteudo,arquivo);
    fclose(arquivo);

    return "Arquivo criado\n";
}