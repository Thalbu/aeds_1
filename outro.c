#define NUN_USERS 5
# include <stdio.h>
#include <math.h>
int main() {

  int amizades[NUN_USERS][NUN_USERS];
  int i;
  int j;
  int x;
  int a1;
  int cont=0;
  int u;
  int v;
  float coef;
  float n=0;

  for(i=0;i<5;i++){
    for(j=0;j<5;j++){
      fscanf(stdin,"%d",&v);
      amizades[i][j]=v;
    }
  }
  scanf("%d", &a1 );
  for ( j = 0; j < 5; j++) {
    n+= amizades[a1][j];
  }
  n=(n*(n-1))/2;
  for (j=0; j< 5;j++){
    if(a1==j){
      n=n
    }else {
      if (amizades[a1][j]==1){
        u=j;
        for ( x = u+1; x < 5; x++) {
          if((u!=a1)&&(amizades[a1][x]==1)){
            if(amizades[x][u]==1){
              cont++;
            }
          }
        }
      }
    }
  }
  coef=cont/n;
  printf("%.2f\n",coef );
  return 0;
}
