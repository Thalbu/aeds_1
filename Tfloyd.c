#include <stdio.h>
#define BUFSZ 256

int main(void)
{
    // Lendo arquivo de entrada:
    char line[BUFSZ];
    fgets(line, BUFSZ, stdin);

    // Declaracao das variaveis A e B:
    int N = 0;

    // Inicializando A e B com os dados lidos do arquivo:
    sscanf(line, "%d\n", &N);

    // Insira codigo para imprimir um triangulo de Floyd.
	
	int x = 1, lin = 1, col = 1;
	printf("\n \n");
    while(lin <= N)
	{
	    if(lin == col)
		{
		    printf("%d\n",x++);
			lin++;
			col = 1;
		}
	    else 
		{
		    printf("%d ", x++);
			col++;
		}
	}
    // Terminar de executar com sucesso:
    return 0;
}
