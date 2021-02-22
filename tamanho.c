#include <stdio.h>
#include <string.h>
#define BUFSZ 1024

int main(void)
{
    // Lendo linha do arquivo de entrada:
    char linha[BUFSZ];
    fgets(linha, BUFSZ, stdin);

	//char frase []=0;
	//scranf ("%d", &frase);
    int tamanho = 0;
    // Calcule o tamanho do string.
	for(tamanho=0; linha[tamanho]!='\0'; tamanho++);


	printf("%d \n", tamanho);
    // Terminar de executar com sucesso:
    return 0;
}
