#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// int leia_chave(char str[], int Tamanho, FILE *entrada)
// {
//     int i = 0;
//     char caracteres;
//     caracteres = fgetc(entrada);

//     while ( i <=6)
//     {   
//             str[i] = caracteres;
//             caracteres = fgetc(entrada);
//             i++;
//     }
//         str[i] = '\0';
        
   
    
    
//     return i;
// }

int OperacaoRemocao(char *chave){

int i = 0;
char registro[64];
FILE *entrada;
char chaveArquivo[5];

if ((entrada = fopen("Dados.dat", "a+b")) == NULL)
{
    fprintf(stderr, "Erro ao abrir o arquivo");
    return EXIT_FAILURE;
}
while (registro[i] != EOF)
{
    
    fread(chaveArquivo, sizeof(char) ,6,entrada);
    
    i += 58;

    if (chaveArquivo == chave)
    {
        printf("%s", chaveArquivo);
    }
    
}




    

return EXIT_SUCCESS;
}