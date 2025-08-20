#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"../lib/jurossimples.h"
#include"../lib/arquivo.h"


struct Funcionario
{
    char nome [100];
    float salario;
    float convenio;
    float premio;
    float salarioliquido;

};
int main(){
    struct Funcionario fun;
    printf("Digite o nome do funcionário:\n");
    fgets(fun.nome, sizeof(fun.nome),stdin);
    printf("Digite o salário do funcionário:\n");
    scanf("%f", &fun.salario);
    printf("Digite o desconto de convenio do funcionário:\n");
    scanf("%f", &fun.convenio);
    printf("Digite o prêmio do funcionário:\n");
    scanf("%f",&fun.premio);
    
    printf("O desconto do convênio é %.2f\n", jurosSimples(fun.salario,fun.convenio));
    printf("O prêmio do funcionário é %.2f\n", jurosSimples(fun.salario,fun.premio));
    
    fun.salarioliquido=jurosSimples(fun.salario,fun.convenio)-jurosSimples(fun.salario,fun.premio)+fun.salario;

    printf("O salário liquido é %.2f\n",fun.salarioliquido);
    //Vamos criar uma composição com testos literais e variáveis para guardar no arquivo de texto.
    char dados_funcionarios[100];
    char nome[30]={"\nNome:"};
    strcat(nome,fun.nome);
    strcat(dados_funcionarios,nome);

    //criamos o vetor salario para armazenar o texto salário com R$ e juntar(concatenar) com o valor do salário
    char salario[20]={"\nSalario:R$"};
    
    //foi criado o vetor c_salario oara guardar o valor do salário convertido em char. Somente assim, será concatenado com o texto salário R$
    char c_salario[10];
    
    //Estamos usando o comando sprintf para converter o valor digitado do salario, que vem do formato float, para o formato char.
    //Assim podemos juntar com o vetor salario, criando, então a estrutura: Salário R$ 0000.00
    //convertendo(de fun.salario para c_salario) fun.salario(float)que vem no formato"%.2f" em c_salario(char)
    sprintf(c_salario,"%.2f", fun.salario);
   
    //Junção entre os vetores salario(salário R$) com c_salario (O valor digitado), que foi convertido no sprintf
    //strcat para juntar o c_salario no salario
    strcat(salario,c_salario);
    
    //depois de juntar os vetores relacionados ao salário, agora iremos adicionar ao vetor de dados_funcionario para gravar no arquivo de texto
    strcat(dados_funcionarios,salario);

    char salario_liquido[30]={"\nSalário Líquido: R$"};
    char c_salario_liquido[10];
    sprintf(c_salario_liquido,"%.2f",fun.salarioliquido);
    strcat(salario_liquido, c_salario_liquido);
    strcat(dados_funcionarios,salario_liquido);
        
    //criei a variavel char resposta que chamará a função criar do #include "arquivo.h"(onde foi criado a função texto e criar)
    char *resposta = criar("files/funcionario.txt", dados_funcionarios);

    


    return 0;
    
}