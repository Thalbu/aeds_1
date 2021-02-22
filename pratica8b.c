#include <stdio.h>
#include <stdlib.h>


struct vd {
    int *vec;
    int tamanho;
};


//struct vd *cria(int tamanho);

void imprime (struct vd *v){
	int i;
	for(i=0;i<v->tamanho;i++){
		printf("%d ", v->vec[i]);
	}
	printf("\n");
	
}
void destroi(struct vd *v, int valor, int posicao){
	if(posicao>v->tamanho){
		printf("Posicao inexistente\n");
	} else {
		v->vec[posicao]=valor;
	    imprime(v);
	}
	
}
void estende(struct vd *v, int valor){
	int i;
	int aux= (int *) calloc(v->tamanho+1,sizeof (int));
	for(i=0;i<v->tamanho;i++){
		aux[i]=v->vec[i];
	}
	aux[v->tamanho]= valor;
	v->vec=aux;
	free(aux);
void atribui(struct vd *v, int valor, int posicao){
	v->vec[posicao]=valor;
}
	
int main(){
	struct vd v;
	
	int n,m,posicao,valor,i;
	scanf("%d %d",&v.tamanho, &n);
	v.vec= (int *) calloc(v.tamanho,sizeof (int));
	for(i=0;i<n;i++){
		scanf("%d",&valor);
		estende(&v, valor, i);
	}
	scanf("%d", &m);
	for(i=0;i<m;i++){
		scanf("%d %d", &posicao, &valor);
		destroi(&v,valor,posicao);
	}

	return 0;
}