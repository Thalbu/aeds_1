#include <stdio.h>
#include <math.h>
#include <string.h>

int contar_pontos (int aposta[]){
	int sorteados[6]={6,9,22,23,48,52};
	int i,j;
	int cont=0;
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if(sorteados[i]==aposta[j]){
				cont+=1;
		
			}
		}
	}
	return (cont);
}
int lost_vencedores (int aposta[]){
	int lost[6]={4,8,15,16,23,42};
	int i,j;
	int cont=0;
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if(lost[i]==aposta[j]){
				cont+=1;
		
			}
		}
	}
	return (cont);
}

int main(int argc,char **argv){
	FILE *cartelas = fopen("cartelas.txt","r");
	int sena[10];
	int quina[10];
	int quadra[10];
	//int sorteados[6]={6,9,22,23,48,52};
	//int lost[6]={4,8,15,16,23,42};
	int lost_venc[10];
	int aposta[6];
	int numero;
	char virgula;
	int n;
	int x;
	int conta;
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	
	for(n=0;n<10000;n++){
		fscanf(cartelas,"%d", &numero);
		fscanf(cartelas, "%c", &virgula);
		for(x=0;x<6;x++){
			fscanf(cartelas,"%d", &aposta[x]);
		}
		conta = contar_pontos(aposta);
		if(conta==6){
			sena[a]=numero;
			a++;
		}
		if(conta==5){
			quina[b]=numero;
			b++;
		}
		if(conta==4){
			quadra[c]=numero;
			c++;
		}
		conta = lost_vencedores(aposta);
		if (conta==6){
			lost_venc[d]=numero;
			d++;
		}
	}
	int y;
	int z=a-1;
	printf("Sena: ");
	for(y=0;y<a;y++){
		printf("%d", sena[y]);
		if(y<z){
			printf(",");
		}
	}
	printf("\n");
	printf("Quina: ");
	z=b-1;
	for(y=0;y<b;y++){
		printf("%d", quina[y]);
		if(y<z){
			printf(",");
		}
	}
	printf("\n");
	printf("Quadra: ");
	z=c-1;
	for(y=0;y<c;y++){
		printf("%d", quadra[y]);
		if(y<z){
			printf(",");
		}
	}
	printf("\n");
	printf("Lost: ");
	z=d-1;
	for(y=0;y<d;y++){
		printf("%d", lost_venc[y]);
		if(y<z){
			printf(",");
		}
	}
	
	
	
	
	return 0;
}
	