#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


int leia_registro(char str[], int Tamanho, FILE *entrada)
{
    int i = 0;
    char caracteres;
    int contador = 0;
    caracteres = fgetc(entrada);

    while ( contador != 4)
    {
                
            str[i] = caracteres;
            i++;
            

            caracteres = fgetc(entrada);

            if (caracteres == '|'){ contador++; }
    }
        str[i] = '\0';
        
   
    
    
    return i;
}



int importacao(char *NomeArquivoImportacao){

FILE *entrada;
char registro[64];
FILE *SAIDA;
int i = 0;
bool verificador;

if ((entrada = fopen(NomeArquivoImportacao, "r")) == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo %s\n", NomeArquivoImportacao);
        exit(EXIT_FAILURE);
    }


if ((SAIDA = fopen("Dados.dat","wb")) == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo %s\n", NomeArquivoImportacao);
        exit(EXIT_FAILURE);
    }

while (registro[i] != EOF)
{

   verificador = leia_registro(registro, 64, entrada );
   
   fwrite(&registro, 64, 1, SAIDA);

   
   
    i++;  
}
printf("arquivo gerado com sucesso");





fclose(entrada);
fclose(SAIDA);
return 0;
}