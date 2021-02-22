#define NUN_USERS 5
# include <stdio.h>
int main() {

    int amizades[NUN_USERS][NUN_USERS];
    int i;
    int j;
    int v;
    int u1;
    int u2;
    int x;

    for (i=0; i<5; i++){
      for(j=0; j<5; j++){
        fscanf (stdin,"%d", &v);
        amizades [i][j] = v;
      }
    }
    for ( x = 0; x < 5; x++) {
      scanf("%d %d", &u1, &u2);
      if (amizades[u1][u2]==0){
      amizades[u1][u2]=1;
      amizades[u2][u1]=1;
    }else{
      if (amizades[u1][u2]==1) {
        amizades[u1][u2]=0;
        amizades[u2][u1]=0;
      }
    }
    }
    for ( i = 0; i < 5; i++) {
      for ( j = 0; j < 5; j++) {
        printf("%d ",amizades [i][j] );
      }
      printf("\n");
    }
    return 0;
  }
