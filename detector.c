#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUFSZ 1024

int main(void)
{
    // Lendo linha do arquivo de entrada:
    char linha[BUFSZ];
    fgets(linha, BUFSZ, stdin);
    int tamanho;
    for (tamanho = 0;linha[tamanho]!='\0' ; tamanho++);

    // Removendo quebra de linha:
    if(strchr(linha, '\n')) *strchr(linha, '\n') = '\0';

    // Escreva código para detectar se linha é um palíndromo.
    int i;
    int j=0;
    char s1[BUFSZ];
    for (i=strlen(linha)-1; i >=0 ; i--) {
      s1[j]=linha[i];
      j++;
    }
    s1[j]='\0';

    if (strcmp (linha,s1) == 0) {
      printf("%d\n", 1 );
    }
    else
      printf("%d\n", 0);

    // Terminar de executar com sucesso:
    return 0;
}
