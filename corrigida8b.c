#include <stdio.h>
#include <stdlib.h>

struct vd {
    int *vec;
    int tamanho;
};

int *cria(int tamanho){
    int *v=(int*)calloc(tamanho, sizeof(int));
    return v;
}


void destroi(struct vd *v){
    free(v->vec); 
}
 
void imprime(struct vd *v){
    for(int i=0;i<v->tamanho;i++){
        printf("%d ",v->vec[i]);
    }
    printf("\n");
}

void estende(struct vd *v, int valor){
    int *v2 = (int *) calloc((v->tamanho+1), sizeof(int));
    v2[v->tamanho]=valor;
    for(int i=0;i<v->tamanho;i++){
        v2[i]=v->vec[i];
    }
    free(v->vec);
    v->vec=v2;
    v->tamanho+=1;
}

void atribui(struct vd *v, int valor, int posicao){
    if(posicao<=(v->tamanho-1)){
        v->vec[posicao]=valor;
        imprime(v);
    }else{
    printf("Posicao inexistente\n");
    }
}

int main (void){
    int n,valor,m,posicao,i;
    struct vd v;
    scanf("%d",&v.tamanho);
    v.vec=cria(v.tamanho);
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&valor);
        estende(&v, valor);
    }
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%d %d",&posicao,&valor);
        atribui(&v,valor,posicao);
    }
    destroi(&v);
    return 0;
}