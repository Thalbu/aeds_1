#include <stdio.h>
#include <string.h>
#define BUFSZ 4096

int main(void)
{

    char linha[BUFSZ];
    fgets(linha, BUFSZ, stdin);
    if(strchr(linha,'\n')) *strchr(linha,'\n')='\0';
    int x=0;
	char aux = linha[x], y;
    char maior, menor;
    maior = linha[x];
    menor = linha[x];
    
     while (aux!='\0')
    {
      
      y = linha[x+1];
      if ((y!='\0')&&(maior<y))
	     maior = y;
	  x++;
	  aux = linha[x];
    }
    x=0;
    aux = linha[x];
    
   while (aux!='\0')
    {
      
      y = linha[x+1];
      if ((y!='\0')&&(y!=' ')&&(menor>y))
	     menor = y; 
	  x++;
	  aux = linha[x];
    }
  
    
  
    printf ("\n%c %c\n",menor,maior);


    return 0;
}




