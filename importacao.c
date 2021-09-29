#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool escreve_registro(char *registro,FILE *saida){

if (fputs(registro, saida))
{
    return true;
}

    

return false;
}

int leia_registro(char str[], int Tamanho, FILE *entrada)
{
    int i = 0;
    char caracteres;
    int contador = 0;
    caracteres = fgetc(entrada);

    while (str[i] != EOF && contador != 4)
    {
                
            str[i] = caracteres;
            i++;
            

            caracteres = fgetc(entrada);
            if (caracteres == '|'){ contador++; }
    }
    while (i != 64)
    {
        str[i] = '\0';
        i++;
    }
    
    
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
   

    escreve_registro(registro,SAIDA); 
    i++;  
}

if (verificador) {printf("Arquivo gerado com sucesso");}
else
{
    printf("Erro ao gerar arquivo");
}



fclose(entrada);
fclose(SAIDA);
return 0;
}