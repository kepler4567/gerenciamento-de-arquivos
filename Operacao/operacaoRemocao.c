#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int OperacaoRemocao(char *chave){

int i = 0;
char registro[64];
FILE *entrada;
char chaveArquivo[5];
int contador = 0;

if ((entrada = fopen("Dados.dat", "a+b")) == NULL)
{
    fprintf(stderr, "Erro ao abrir o arquivo");
    return EXIT_FAILURE;
}
while (registro[i] != EOF)
{
    
    fread(registro, sizeof(char) ,1,entrada);
     
    
    for (int t = 0; t < 6; t++)
    {
         
         chaveArquivo[t] = registro[t];
         
    }
    i++;
    printf("%s", chaveArquivo);
}




fclose(entrada);


return EXIT_SUCCESS;
}