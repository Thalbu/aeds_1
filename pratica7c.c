#include <stdio.h>
#include <string.h>
#include <math.h>

struct jogador{
	char nome[16];
	int pontos;
};

int main (){
	struct jogador buffer[16];
	struct jogador pontos[16];
	char comando[16];
	int proximo_processar=0;
	int proximo_vazio=0;
	int zerar;
	int y,x,i=0;
	int maior=0,a=0;
	
	for(zerar=0;zerar<16;zerar++){
		pontos[zerar].pontos=0;
	}
	
	
	while(fscanf(stdin,"%s", comando)== 1){
		
		if(comando[0]=='c'){
			scanf("%s %d", buffer[proximo_vazio].nome, &buffer[proximo_vazio].pontos);
			if(proximo_vazio<16){
				proximo_vazio++;
			}else{
				proximo_vazio=0;
			}
		}
		if(comando[0]=='p'){
			
			for (x=i;x>(-1);x--){
			    if(strcmp(pontos[x].nome,buffer[proximo_processar].nome)==0){
			    	pontos[x].pontos = (pontos[x].pontos) + (buffer[proximo_processar].pontos);
		    	}
		    	else{
			    	strcpy(pontos[i].nome,buffer[proximo_processar].nome);
			    	pontos[i].pontos = (buffer[proximo_processar].pontos);
			    }
			}
			
			i++;
			if(proximo_processar<16){
				proximo_processar++;
			}else{
				proximo_processar=0;
			}
		
		if(comando[0]=='a'){
			for(y=0;y<=i;y++){
				if(maior<pontos[y].pontos){
					maior=pontos[y].pontos;
					a=y;
					
					
				}
			}
			printf("%s: %d\n", pontos[a].nome, pontos[a].pontos);
		}

	}
	
	
	return 0;
}}

