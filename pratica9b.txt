#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void encrementar(int aux, int i, int *vetor, int *aumentado){
	vetor[aux]=vetor[aux]+1;
	for(i=aux; i>0; i--){
		if(vetor[i]>9){
			vetor[i]=vetor[i]%10;
			vetor[i-1]=vetor[i-1]+1;
		}
		else{
		    break;
		}
	}
	
	
	if(vetor[0]>9){
		aumentado[0]=1;
		//printf("Aumentado = %d\n", aumentado[0]);
		aux=aux+1;
		vetor[0]=vetor[0]%10;
		int *novo=(int *) malloc((aux)*sizeof(int));
		for(i=(aux);i>0;i--){
			novo[i]=vetor[i-1];
		}
		novo[0]=1;
		vetor=(int *) realloc(vetor, (aux) * sizeof(int));
		for(i=(aux);i>(-1);i--){
			vetor[i]=novo[i];
		}
	}
}

int main(){

	char numero[100];
	scanf("%s", numero);
	int aux=(strlen(numero)-1);
	int *vetor = (int *) malloc(aux* sizeof(int));
	int i;
	for(i=0;i<(strlen(numero));i++){
		vetor[i]=(numero[i]-48);
	}
	int *aumentado=(int *) calloc(1,sizeof(int));
	//printf("Aumentado=%d\n", aumentado[0]);
	encrementar(aux, i, vetor, aumentado);
	//printf("Aumentado=%d\n", aumentado[0]);
	if(aumentado[0]==1){
		for(i=0;i<=(aux+1);i++){
			// printf("entrou");
			printf("%d", vetor[i]);
		}
	}
	if(aumentado[0]!=1){
		for(i=0;i<=(aux);i++){
			// printf("entrou");
			printf("%d", vetor[i]);
		}
	}
	free(vetor);
	free(aumentado);
	
	return 0;
}