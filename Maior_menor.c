#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define BUFSZ 4096
/*
  A função ATOI (stdlib) recebe uma string de caracteres e a transforma em inteiro
  A função ITOA (stdlib) recebe um inteiro e transfoma em string
  A funçao SPRINTF Converte um inteiro para string e printa o resultado
  strncpy( x, s+12, 5 ); x= para onde vai os dados , inicial , quantidade
  x[5] = '\0'; a funçao nao delimita a string gerada
  exemplo de strncpy:
        s = 654321
        strncpy( x, s+2, 3 );
        x = 432

*/

int main(void)
{
    // Lendo linha do arquivo de entrada:
    char linha[BUFSZ];
    fgets(linha, BUFSZ, stdin);
    // Removendo quebra de linha:
    if(strchr(linha, '\n')) *strchr(linha, '\n') = '\0';

    // Escreva código para processar os números e imprimir
    // o maior e o menor.
    int i,n,aux,j;
    j = 0;
    aux = 0;
    n = strlen(linha);
   // printf("%d\n",n);

    for(i=0;i<n;i++){
        if(linha[i]==' ')
            {aux++;}}

    char ValorChar[aux+1];
    int VetorTNum[aux+1];
    int VetorResp[aux+1];
    char StringResp[2];
   // printf("%d\n",aux);
    aux = 0;

    for(i=0;i<n;i++){
      //  printf("|%d--%d|\n",i,aux);
        if(linha[i-1]==' '){
            aux++;
        }
        while(linha[i] !=' '){
           // printf("%d--%d\n",i,aux);
            j++;
            i++;
            if(i==n){break;}
        }
        VetorTNum[aux]=j;
        j = 0;
    }

    j=0;

    for(i=0;i<=aux;i++){
      //  printf("aux =%d ,VetorTNum[%d] =%d\n\n",aux,i,VetorTNum[i]);
        if(i==0){
            strncpy(ValorChar, linha+0,VetorTNum[i]);
            ValorChar[VetorTNum[i]]='\0';
            VetorResp[i] = atoi(ValorChar);
          //  printf("VetorResp[%d]=%d\n",i,VetorResp[i]);
        }
        else {
            strncpy(ValorChar,linha+j+(aux-(aux-i)),VetorTNum[i]+1); // j+(aux-(aux-i)) serve para lidar com a posiçao e os espaços.
            ValorChar[VetorTNum[i]+1]='\0';                          //  aux é quantidade de espaços. j quantidade de caracteres que foram o numero
            VetorResp[i] = atoi(ValorChar);
          //  printf("VetorResp[%d]=%d\n",i,VetorResp[i]);
        }
         j = j + VetorTNum[i];
        // printf("j=%d\n",j);
    }

    int maior = VetorResp[0];
    int menor = VetorResp[0];

    for(i=0;i<=aux;i++){
        if(VetorResp[i]>maior){
            maior = VetorResp[i];
        }
        if(VetorResp[i]<menor){
            menor = VetorResp[i];
        }
    }

    // Terminar de executar com sucesso:
    printf("%d %d\n",menor,maior);

   /*   sprintf(StringResp,"%d ",menor);
        sprintf(StringResp,"%d\n",maior); Nao funcionou 
        StringResp[0]= itoa(menor);  A funçao itoa não foi reconhecida
        StringResp[1]= ' ';
        StringResp[2]= itoa(maior);
        printf("%s\n",StringResp)
        */
    return 0;
}