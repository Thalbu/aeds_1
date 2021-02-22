#include <string.h>
#include <stdio.h>
#define BUFSZ 4096

int main(void) {
    // Lendo linha do arquivo de entrada:
    char linha[BUFSZ];
    fgets(linha, BUFSZ, stdin);

    // Removendo quebra de linha:
    if(strchr(linha, '\n')) *strchr(linha, '\n') = '\0';

    // Escreva código para processar os números e imprimir
    // o maior e o menor.
    int i=0;
    char num1[BUFSZ];
    int j=0;
    int g=0;
    int n, x, max = 0, min = 2e9;
    int vetor[256];
    for (; linha[i]!='\0'; i++) {
      for (j=0; linha[i] != 32 ; i++) {
        num1[j]=linha[i];
        j++;
      }num1[j]='\0';
      j=0;
        for(x = 0; x<=strlen(num1);x++){
          n = 0;
          while(num1[x]>=48 && num1[x]<=57) n = 10*n + num1[x++] - 48;
          vetor[g] = n;
          if(n<min) min = n;
    }
    g++;
  }
    int aux=g;
    max=vetor[0];
    for ( g = 1; g <=aux ; g++) {
      if (max<vetor[g]) {
        max=vetor[g];
      }
    }
    printf("%d %d\n", min, max );

    // Terminar de executar com sucesso:
    return 0;
}
