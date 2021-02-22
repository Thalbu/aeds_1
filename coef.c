#define NUN_USERS 5
# include <stdio.h>
#include <math.h>
int main() {

  int amizades[NUN_USERS][NUN_USERS];
  //int v;
  float n=0;
  float cont=0;
  int u;
  int j;
  int i;
  float coef=0;
  int x;


  for (i=0; i<5; i++){
    for(j=0; j<5; j++){
      fscanf (stdin,"%d", &x);
      amizades [i][j] = x;
      }
    }
  scanf("%d", &u);
  for (i = 0; i < 5; i++) {
    if (amizades[u][i]==1){
      n+=1;
    }
  }
    //printf("%.0f %.0f\n",n, cont );
    n=n*(n-1)/2;
        for ( j = 0; j < 5; j++) {
          if ((amizades[u][j]==1) && (amizades[j][i]==1) && (j!=u)) {
            cont+=1;
        }
      }



  coef=cont/n;

  printf("%.2f\n", coef );

  return 0;
}
