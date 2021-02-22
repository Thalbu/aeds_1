#include <string.h>
#include <stdio.h>
#define BUFSZ 4096

int main(void)
{
    // Lendo linha do arquivo de entrada:
    char linha[BUFSZ];
    fgets(linha, BUFSZ, stdin);
    // Removendo quebra de linha:
    if(strchr(linha, '\n')) *strchr(linha, '\n') = '\0';

    // Escreva código para processar os números e imprimir
    // o maior e o menor.

	int n, x, max = 0, min = 2e9;
	for(x = 0; x<=strlen(linha);x++)
	{
		n = 0;
		while(linha[x]>=48 && linha[x]<=57) n = 10*n + linha[x++] - 48;
		if(n>max) max = n;
		if(n<min) min = n;
	}
	printf("%d %d",min,max);

    // Terminar de executar com sucesso:
    return 0;
}
