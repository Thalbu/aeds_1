#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct no{
	struct no *prox;
	struct no *anterior;
	int valor;
};

struct lista {
	struct no *primeiro;
	struct no *ultimo;
	int tamanho;
};

struct lista *cria_lista_vazia{
	struct lista *big = malloc (sizeof(struct lista));
	big->primeiro=NULL;
	big->ultimo= NULL;
	big->tamanho=0;
	
	return big;
}

//adiona depois da cabeça e no inicio da lista
void adicionar_inicio (struct lista *l, int digito){
	struct no *novo=malloc(sizeof(struct no));
	if (l->tamanho==0){
		
		novo->prox=NULL;
		l->primeiro=novo;
		l->ultimo=novo;
	}else{
		novo->prox=l->primeiro
		l->primeiro=novo;
	}
	l->tamanho ++;
	novo->digito=digito;
}

void adicionar_final (struct lista *l, int digito){
	struct no *finish = malloc(sizeof(struct no));
	if (l->tamanho==0){
		
		finish->prox=NULL;
		l->primeiro=novo;
		l->ultimo=novo;
	}else{
		novo->prox=finish->primeiro
		finish->primeiro=novo;
	}
	l->tamanho ++;
	finish->digito=digito;
}

// ler a lista alocada dinamicamente e ler cada um e vai imprindo
void imprime (struct esta *lista){
	int i;
	struct no *n =l->primeiro;
	for(i=0;i,l->tamanho;i++){
		printf("%d", n->valor);
		n=n->proximo;
	}
}

int main() {
  struct lista *l = (struct lista*) malloc(sizeof(struct lista));
  
  char *str = "9242423421";
  char c;
  for (int i = 0; i < strlen(str); i++) {
    c = str[i];
    int v = c - 48;
    struct digito *d = (struct digito*) malloc(sizeof(struct digito));
    d->valor = v;
    d->prox = NULL;
    d->anterior = NULL;
    if (i == 0) {
       l->primeiro = d;
       l->ultimo = d;
    } else {
       l->ultimo->prox = d;
       l->ultimo = d;
    }
  }
  return 0;
}