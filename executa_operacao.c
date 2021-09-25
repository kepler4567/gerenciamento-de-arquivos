#include "Operacao/OperacaoBusca.c"
#include "Operacao/OperacaoInsercao.c"
#include "Operacao/operacaoRemocao.c"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int input(char str[], int size){
int i=0;
char c = getchar();
while (c != '\n')
{
    if (i < size-1)
    {
        str[i] = c;
        i++;
    }
    c = getchar();
    
}
str[i] = '\0';
return i;



}


int executa_operacoes(char *ArquivoImportacao){
    char parametro;
    char ChaveRegistro[120];


    printf("Digite a chave ou o registro da operacao, ex: 986243> ");
    input(ChaveRegistro, 120);

    printf("Digite o formato de operacao que deseja, ex: b: ");
    parametro = getchar();

    
    
    
    if (parametro == 'b')
    {
        printf("%s", ChaveRegistro);
        printf("Operacao de busca ativada na chave: %s\n", ChaveRegistro);
        OperacaoBusca(ArquivoImportacao, ChaveRegistro);
    }
    else if (parametro == 'i')
    {
        printf("Operacao de insercao ativada do registro: %s\n",  ChaveRegistro);
        OperacaoInsercao(ArquivoImportacao, ChaveRegistro);
    }
    else if (parametro == 'r')
    {
        printf("Operacao de remocao ativada na chave: %i\n", ChaveRegistro);
        OperacaoRemocao(ArquivoImportacao, ChaveRegistro);
    }
     else 
    {
        fprintf(stderr, "Argumentos incorretos!\n");
        fprintf(stderr, "Modo de uso:\n");
        fprintf(stderr, "$ (chave|registro)\n");
        fprintf(stderr, "$ (b|i|r)");
        exit(EXIT_FAILURE);
    }
    
    return EXIT_SUCCESS;
}