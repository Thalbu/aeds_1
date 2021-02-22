#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void soma(int menor, int aux, int i,int t1, int t2, int *Vet_maior, int *Vet_menor){
	//int j=t1;
	for(i=(aux-1);i>=(aux-menor);i--){
		Vet_maior[i]=Vet_maior[t1-1]+Vet_menor[t2-1];
		t1--;
		t2--;
		
	}
	//for(i=0;i<j;i++){
		//printf("vetor soma[%d]=%d\n", i, Vet_maior[i]);
	//}
}

void encrementar(int aux, int i, int *v3, int *aumentado){
	for(i=(aux-1); i>0; i--){
		if(v3[i]>9){
			v3[i]=v3[i]%10;
			v3[i-1]=v3[i-1]+1;
		}
		else{
		    break;
		}
	}
	if(v3[0]>9){
		aumentado[0]=1;
		//printf("entrou");
		//printf("Aumentado = %d\n", aumentado[0]);
		aux=aux+1;
		v3[0]=v3[0]%10;
		int *novo=(int *) malloc((aux)*sizeof(int));
		for(i=(aux);i>0;i--){
			novo[i]=v3[i-1];
		}
		novo[0]=1;
		v3=(int *) realloc(v3, (aux) * sizeof(int));
		for(i=(aux);i>(-1);i--){
			v3[i]=novo[i];
		}
	}
}


int main(){
	char num1[100];
	char num2[100];
	scanf("%s", num1);
	scanf("%s", num2);
	int i,aux,menor,t1,t2;
	t1=strlen(num1);
	t2=strlen(num2);
	//printf("t1=%d\nt2=%d\n", t1, t2);
	if(strlen(num1)>=strlen(num2)){
		aux=strlen(num1);
	}else{
		aux=strlen(num2);
	}
	//printf("aux=%d\n", aux);
	if(strlen(num1)<=strlen(num2)){
		menor=strlen(num1);
	}else{
		menor=strlen(num2);
	}
	//printf("menor=%d\n", menor);
	int *v1=(int *) calloc(strlen(num1),sizeof(int));
	int *v2=(int *) calloc(strlen(num2),sizeof(int));
	int *v3=(int *) calloc(aux,sizeof(int));
	for(i=0;i<(strlen(num1));i++){
		v1[i]=num1[i]-48;
		//printf("v1[%d]=%d\n", i,v1[i]);
	}
	for(i=0;i<(strlen(num2));i++){
		v2[i]=num2[i]-48;
	//printf("v2[%d]=%d\n", i,v2[i]);
	}
	int *aumentado=(int *) calloc(1,sizeof(int));
	
	if(t1>=t2){
		soma(menor, aux, i, t1, t2, v1, v2);
		for(i=0;i<t1;i++){
			v3[i]=v1[i];
		}
	}
	else{
		soma(menor, aux, i, t2, t1, v2, v1);
		for(i=0;i<t2;i++){
			v3[i]=v2[i];
		}
	}
	
	encrementar(aux, i, v3, aumentado);
	
	if(aumentado[0]==1){
		for(i=0;i<=(aux);i++){
			// printf("entrou");
			printf("%d", v3[i]);
		}
	}
	if(aumentado[0]!=1){
		for(i=0;i<(aux);i++){
			// printf("entrou");
			printf("%d", v3[i]);
		}
	}
	free(aumentado);
	free(v1);
	free(v2);
	free(v3);
	
	return 0;
}
