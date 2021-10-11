#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int OperacaoBusca(char *chave){
    

    char registro[64];
    char key[6];
    FILE *entrada;
    int RRN = 0;
    int ByteOffSet;

    if ((entrada = fopen("Dados.dat", "rb")) == NULL){

        fprintf(stderr, "Erro ao abrir o arquivo\n");
        return EXIT_FAILURE;

    }else{

        while(fgets(registro, sizeof(registro), entrada) != NULL){
       
            strtok(key, "|");

            if(strcmp(key, chave)){

            ByteOffSet = RRN*64;
            printf("registro %s encontrado\n Conteudo = %s (RRN = %i - Byte Offset = %i", key, registro, RRN, ByteOffSet);  
            
            return EXIT_SUCCESS;
        
        }else{
            RRN++;
        }
    }

  
    printf("Registro nao encontrado!!!\n");
    return EXIT_FAILURE;
}

}