#include <stdio.h>
#include <string.h>

struct digito {
  struct digito *prox;
  struct digito *anterior;
  int valor; 
};

struct lista {
  struct digito *primeiro;
  struct digito *ultimo;
  int tamanho;
};

