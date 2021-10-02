#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int OperacaoInsercao( char *registro)
{
    FILE *saida;
    short reg;

    if ((saida = fopen("Dados.dat", "a+b")) == NULL)
    {
        fprintf(stderr, "Erro ao abrir o arquivo");
        return EXIT_FAILURE;
    }

    fwrite(registro, 64, 1, saida);

    fclose(saida);

    return EXIT_SUCCESS;
}
