#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int leia_chave(char str[], int Tamanho, FILE *entrada)
{
    int i = 0;
    char caracteres;
    caracteres = fgetc(entrada);

    while ( i <=6)
    {   
            str[i] = caracteres;
            caracteres = fgetc(entrada);
            i++;
    }
        str[i] = '\0';
        
   
    
    
    return i;
}

int OperacaoRemocao(char *chave){

int ped = -1;
FILE *entrada;
char chaveArquivo;

if ((entrada = fopen("Dados.dat", "a+b")) == NULL)
{
    fprintf(stderr, "Erro ao abrir o arquivo");
    return EXIT_FAILURE;
}
while (entrada)
{
    //leia_chave(chaveArquivo, 6, entrada ); // recebe a chave do registro no arquivo na chaveArquivo

    

}




    

return EXIT_SUCCESS;
}