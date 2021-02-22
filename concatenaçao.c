#include <stdio.h>
#include <string.h>
#define BUFSZ 1024

int main(void)
{
    // Lendo linhas do arquivo de entrada:
    char s1[BUFSZ];
    fgets(s1, BUFSZ, stdin);
    char s2[BUFSZ];
    fgets(s2, BUFSZ, stdin);
    // Removendo quebra de linha:
    if(strchr(s1, '\n')) *strchr(s1, '\n') = '\0';

    // Escreva código para concatenar s1 e s2 em s3.
    char s3[2*BUFSZ];
    strcat (s1,s2);
    int tamanho;
    for(tamanho=0; s1[tamanho]!='\0'; tamanho++);
    int i;
    for ( i = 0; i <= tamanho; i++) {
      s3 [i] = s1 [i];
   }


    // Imprimindo o resultado:
    printf("%s\n", s3);

    // Terminar de executar com sucesso:
    return 0;
}
