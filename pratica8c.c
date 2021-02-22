#include <stdio.h>
#include <stdlib.h>

void soma_vet1(int *v1, int *v2, int *v3, int n){
	int i;
	for(i=0; i<n;i++){
		v3[i]=v1[i]+v2[i];
	}
}

int main(void){

	int n,t;
	scanf("%d %d", &t, &n);
	int *v1 = (int *) malloc(n * sizeof(int));
	int *v2 = (int *) malloc(n * sizeof(int));
	int *v3 = (int *) malloc(n * sizeof(int));
	int i,j;
	for (i=0;i<n;i++){
		scanf("%d", &v1[i]);
	}

	for (i=0;i<n;i++){
		scanf("%d", &v2[i]);
	}
	
	for(i=0;i<t;i++){
		soma_vet1(v1, v2, v3, n);
		for(j=0;j<n;j++){
			v1[j]=v2[j];
			v2[j]=v3[j];
		}
	}
	for(i=0; i<n;i++){
		printf("%d ", v3[i]);
	}
	printf("\n");
	free(v3);
	free(v1);
	free(v2);
	
	return 0;
}