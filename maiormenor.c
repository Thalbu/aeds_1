#include <string.h>
#include <stdio.h>
#define BUFSZ 4096

int main(void)
{
    // Lendo linha do arquivo de entrada:
    char linha[BUFSZ];
    fgets(linha, BUFSZ, stdin);
    // Removendo quebra de linha:
    if(strchr(linha, '\n')) *(strchr(linha, '\n')) = '\0';

    // Escreva código para processar os números e imprimir
    // o maior e o menor.
	int max=0;
	int	min=2e9;
	int j;
	int i=0;
	while (i<=strlen(linha)){
		j=0;
		while((linha[i]>=48) && (linha[i] <=57)){
			j=j*10 + linha[i++] -48;
		if (j>max){
			max=j;
		}
		if (j<min){
			min=j;
		}
		}
			i++;
	}
	printf ("%d %d", min,max);
    // Terminar de executar com sucesso:
    return 0;
}
