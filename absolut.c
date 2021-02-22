#include <stdio.h>
#define BUFSZ 256

int main(void)
{
    // Lendo arquivo de entrada:
    char line[BUFSZ];
    fgets(line, BUFSZ, stdin);

    // Declaracao das variaveis A, B e C:
    int A = 0;
    int B = 0;
    int C = 0;

    // Inicializando A, B e C com os dados lidos do arquivo:
    sscanf(line, "%d %d %d\n", &A, &B, &C);

    // Insira codigo para calcular o numero com maior valor absoluto.
    // TODO
	int a, b, c, absolut;
	
	if(A<0)
    {
		a = A * (-1);
	}		
	else
	{
        a = A;
    }
	if(B<0)
	{
		b = B * (-1);
	}
	else
	{
		b = B;
	}
	if(C<0)
	{
		c = C * (-1);
	}	
	else
	{
		c = C;
 	}	
	if(a>=b)
    {
		if(a>=c)
		{
			absolut = A;
		}	
		else
		{
			absolut = C;
		}	
 	}	
	else
	{
		if(b>=c)
		{
			absolut = B;
		}
		else
		{
			absolut = C;
		}	
	}
    printf("%d", absolut);	
    // Insira codigo para imprimir o numero com maior valor absoluto.
    // TODO
    
    // Terminar de executar com sucesso:
    return 0;
}
