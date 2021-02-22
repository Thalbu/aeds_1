#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int contador (int vetcom[],int vetcom1[]){
	// Conte a quantidade de vezes que a letra
	// aparece na palavra p. armazene
	int cont=1;
	int j;
	for(j=0;j<=25;j++){
		if(vetcom[j]==vetcom1[j]){
			cont=cont*1;
		}
		if(vetcom[j]!=vetcom1[j]){
			cont=cont*0;
		}
	}
	return cont;
}

	void ocorrencias(int vetor[],char palavra[]){
	// Conte o numero de veses que tem ocorrencia
	int i,j;
	for(i =0;i<=25;i++){
		int cont=0;
		for(j =0;j<=(strlen(palavra)-1);j++){
			if((97+i)==palavra[j]){
				cont+=1;
				vetor[i]=cont;
			}
		}
	}
}


	


int main(void){
	
	// Vamos ler 3 palavras da entrada
	char palavra1[100]={0};
	char palavra2[100]={0};
	char palavra3[100]={0};
	fscanf(stdin,"%s",palavra1);
	fscanf(stdin,"%s",palavra2);
	fscanf(stdin,"%s",palavra3);
	
	// Criamos tres vetores de ocorrencia
	int ocorrencias1[26]={0};
	int ocorrencias2[26]={0};
	int ocorrencias3[26]={0};
	
	// Implemente seu programa aqui
	// anteriormente. Chame a funcaode ocorrencia de letras nas
	// palavras e preencher os vetores de ocorrencia e chame 
	// a funcao para verificar se e anagrama
	ocorrencias(ocorrencias1,palavra1);
	ocorrencias(ocorrencias2,palavra2);
	ocorrencias(ocorrencias3,palavra3);
	
	int f=1;
	f=f * contador(ocorrencias1,ocorrencias2);
	f=f * contador(ocorrencias1,ocorrencias3);
	f=f * contador(ocorrencias2,ocorrencias3);
	
	if(f==1){
		printf("sim\n");
	}else{
		printf("nao\n");
	}
	
	return 0;
}




	