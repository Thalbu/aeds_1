#include <stdio.h>
  int main (void) {
  int a=0;
  int b=0;
  int c=0;
  int salvo=0;

  printf("digite 3 numeros para serem colocas na ordem decrescente\n");
  scanf ("%d %d %d", &a, &b, &c);
  if (a<b){
    salvo=a;
    a=b;
    b=salvo;
  }

  if (a<c) {
    salvo=a;
    a=c;
    c=salvo;
  }

  if (b<c) {
    salvo=b;
    b=c;
    c=salvo;
  }

  printf("Os valores em ordem crescente sao: %d %d %d\n", a, b, c);
return 0;
}
