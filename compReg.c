#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int CalculabyteOffSet(int RRN){

    int ByteOffSet;
    ByteOffSet = RRN*64;

    

}

char calculaReg(int posicao)
{
    FILE *entrada;
    char registro[64];
    short comp_reg;
    int RRN = 0;
    

    if ((entrada = fopen("Dados.dat", "r+b")) == NULL)
    {
        fprintf(stderr, "Erro ao abrir o arquivo Dados.dat");
        return EXIT_FAILURE;
    }

    
    
    while (registro[RRN] != EOF)
    {
        
        fread(registro, sizeof(char) ,64,entrada);
        
        RRN++;

        CalculabyteOffSet(RRN);

        
    }
    
    
    fclose(entrada);
    
    
    return registro[posicao];
}
int main()
{
   char registro =  calculaReg(4);
   printf("%c", registro);
}