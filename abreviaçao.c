#include <string.h>
#include <stdio.h>
#define BUFSZ 1024

int main(void)
{
    // Lendo linha do arquivo de entrada:
    char nome[BUFSZ];
    fgets(nome, BUFSZ, stdin);
    // Removendo quebra de linha:
    if(strchr(nome, '\n')) *strchr(nome, '\n') = '\0';
    char abreviacao[BUFSZ];
    int i;
    int j=0;
    printf("%s \n", nome );
    // Escreva código para abreviar o nome.
    //if ((linha[i]>96) && (linha[i]<123)){
    for(i=0;nome[i]!='\0';i++){
     if ((nome[i]>64) && (nome[i]<91)) {
       abreviacao[j]=nome[i];
       j++;
       abreviacao[j] = 46 ;
       j++;
     }
   }
   abreviacao[j]='\0';
   printf("%s", abreviacao );

  // printf("%s \n", nome );
  // a[j]='\0';

    // Terminar de executar com sucesso:
    return 0;
}
