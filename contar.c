#define NUN_USERS 5
# include <stdio.h>
int main() {

    int amizades[NUN_USERS][NUN_USERS];
    int i;
    int j;
    int v;
    int cont=0;
    int u1;
    int u2;

    for (i=0; i<5; i++){
      for(j=0; j<5; j++){
        fscanf (stdin,"%d", &v);
        amizades [i][j] = v;
      }
    }
  scanf("%d %d", &u1, &u2);
  //  for (i = 0; i < 5; i++) {
      for ( j = 0; j < 5; j++) {
        if((amizades[u1][j]==1) && (amizades[u2][j]==1)){
          cont+=1;
        }
      }
    //}
    printf("%d\n", cont );
    // Implemente seu programa aqui
    // Utilize a funcao fscanf para ler da entrada padrao

    return 0;
}
