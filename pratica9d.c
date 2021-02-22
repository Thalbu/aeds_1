#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

	char numero[100];
	int expoente;
	scanf("%s", numero);
	scanf("%d", &expoente);
	int vetor[(strlen(numero)-1)];
	int i;
	for(i=0;i<(strlen(numero));i++){
		vetor[i]=numero[i]-48;
	}
	
	for(i=(strlen(numero)-expoente);i<(strlen(numero));i++){
		printf("%d", vetor[i]);
	}

	return 0;
}