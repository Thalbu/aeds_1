#include <stdio.h>
#include <string.h>

int main(){

	char numero[100];
	scanf("%s", numero);
	int vetor[(strlen(numero)-1)];
	int i;
	for(i=0;i<(strlen(numero));i++){
		vetor[i]=numero[i]-48;
	}

	for(i=0;i<(strlen(numero));i++){
		printf("%d", vetor[i]);
	}

	return 0;
}
