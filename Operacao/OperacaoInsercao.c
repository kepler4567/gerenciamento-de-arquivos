#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int OperacaoInsercao(char *ArquivoImportacao, char *registro){

   
FILE *entrada;

if ((entrada = fopen(ArquivoImportacao, "a+")) == NULL)
{
    fprintf(stderr, "Erro ao abrir o arquivo %s", ArquivoImportacao);
    return EXIT_FAILURE;
}


fputs(registro, entrada);

fclose(entrada);
return EXIT_SUCCESS;
}

