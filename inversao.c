#include <stdio.h>
#include <string.h>
#define BUFSZ 1024

int main(void)
{
    // Lendo linha do arquivo de entrada:
    char linha[BUFSZ];
    fgets(linha, BUFSZ, stdin);
	int i;

    // Converta todos os caracteres minúsculos para maiúsculos.
	for(i=0;linha[i]!='\0';i++){
		if ((linha[i]>96) && (linha[i]<123)){
		linha[i]= linha[i]-32;
		}
		//else
		//linha[i]==linha[i];
	}
	printf("%s", linha);
    // Terminar de executar com sucesso:
    return 0;
}
