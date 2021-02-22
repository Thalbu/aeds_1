#include <stdio.h>
#include <math.h> 
#include<stdlib.h>



unsigned int modifica_chamada(int id){
	//implemente a sua funcao
	int chamada[32],pot,j;
	unsigned int aux = 0;
	
	for(j=0;j<32;j++){
		if(id==j){
			chamada[j]=1;
			pot=pow(2,j);
			aux=aux+(chamada[j]*pot);
		}else{
			chamada[j]=0;
		}
	}
	return aux;
}

int main(){
	unsigned int lista =0;
	
	int n,id;
	scanf("%d", &n);
	for (int i=0;i<n;i++){
		
		scanf("%d", &id);
		//faca a chamada da sua funcao
		lista=lista+modifica_chamada(id);
	}
	
	printf("%u",lista);
	
	
	return 0;
}
