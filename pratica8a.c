#include <stdio.h>
#include <stdlib.h>
void soma_vet1(int *v1, int *v2, int *v3, int n){
	int i;
	for(i=0; i<n;i++){
		v3[i]=v1[i]+v2[i];
	}
	printf("soma1");
	for(i=0; i<n;i++){
		printf(" %d", v3[i]);
	}
	printf("\n");
	
	free(v3);
}

int *soma_vet2(int *v1, int *v2, int n){
	int i;
	int *v3 = (int *) malloc(n * sizeof(int);
	for(i=0;i<n;i++){
		v3[i]=v1[i]+v2[i];
	}
	retun v3;
}
void soma_vet3(int *v1, int *v2, int **v3, int n){
	int i;
	for(i=0;i<n;i++){
		v3[i]=v1[i]+v2[i];
	}
	
	
}

int main(void){
	int n;
	scanf("%d", &n);
	int *v1 = (int *) malloc(n * sizeof(int);
	int *v2 = (int *) malloc(n * sizeof(int);
	int *v3 = (int *) malloc(n * sizeof(int);
	int i;
	for (i=0;i<n;i++){
		scanf("%d", &v1[i]);
	}

	for (i=0;i<n;i++){
		scanf("%d", &v2[i]);
	}
	
	soma_vet1(v1, v2, v3, n);
	
	int *vetor = soma_vet2(v1, v2, n);
	printf("soma2");
	for(i=0; i<n;i++){
		printf(" %d", v3[i]);
	}
	printf("\n");
	free(v3);
	
	int vetor_novo[n];
	soma_vet3(v1, v2, vetor_novo, n);
	
	printf("soma3");
	for(i=0; i<n;i++){
		printf(" %d", vetor_novo[i]);
	}
	printf("\n");
	
	
	free(v1);
	free(v2);
	
	return 0;
}
