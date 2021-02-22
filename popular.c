#define NUN_USERS 5
# include <stdio.h>
int main() {

    int amizades[NUN_USERS][NUN_USERS];
    int i;
    int j;
    int v;
    //int cont0=0;
    //int cont1=0;
  //  int cont2=0;
  //  int cont3=0;
    //int cont4=0;
    int N=0;
    int popular[5][1];
    for ( i = 0; i <5; i++) {
      popular[i][0]=0;
    }

    for (i=0; i<5; i++){
      for(j=0; j<5; j++){
        fscanf (stdin,"%d", &v);
        amizades [i][j] = v;
      }
    }
    for (i=0; i<5; i++){
      if (amizades[0][i]==1) {
        popular[0][0]+=1;
      }
      if (amizades[1][i]==1) {
        popular[1][0]+=1;
      }
      if (amizades[2][i]==1) {
        popular[2][0]+=1;
      }
      if (amizades[3][i]==1) {
        popular[3][0]+=1;
      }
      if (amizades[4][i]==1) {
        popular[4][0]+=1;
      }
    }
    //for (i = 0; i < 5; i++) {
    //  printf("%d\n",popular[i][0] );

    for ( i = 0; i < 5; i++) {
      if (N<popular[i][0]) {
        N=popular[i][0];
      }
    }
    for ( i = 0; i < 5; i++ ) {
      if (N==popular[i][0]){
      printf("%d ", i );
    }
  }

    return 0;
  }
