#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int l,c,i,j,n;
	scanf("%d %d", &l, &c);
	//printf("%d \n", l);
	//printf("%d \n", c);
	int **matriz = (int **) malloc (l * sizeof(int *));
	for(i=0 ; i<l ; i++){
		matriz[i]= (int *) malloc (c * sizeof(int));
	}
	int **transposta = (int **) malloc (c * sizeof(int *));
	for(i=0 ; i<c ; i++){
		transposta[i]= (int *) malloc (l * sizeof(int));
	}
	
	for(i=0 ; i<l ; i++){
		for(j=0 ; j<c ; j++){
			scanf("%d", &n);
			matriz[i][j]=n;
		}
	}
	
	for(i=0 ; i<l ; i++){
		for(j=0 ; j<c ; j++){
			transposta[j][i] = matriz[i][j];
		}
	}
	
	for(j=0 ; j<c ; j++){
		for(i=0 ; i<l ; i++){
			printf("%d ", transposta[j][i]);
		}
		printf("\n");
	}
	
	for(i=0 ; i<l ; i++){
		free(matriz[i]);	
	}
	
	for(j=0 ; j<c ; j++){
		free(transposta[j]);
	}
	
	free(matriz);
	free(transposta);
	
	return 0;
}
