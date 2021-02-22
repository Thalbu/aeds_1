#define NUN_USERS 5
# include <stdio.h>
int main() {

    int amizades[NUN_USERS][NUN_USERS];
    int i;
    int j;
    int v;
    int cont=0;

    for (i=0; i<5; i++){
      for(j=0; j<5; j++){
        fscanf (stdin,"%d", &v);
        amizades [i][j] = v;
      }
    }
    for (i=0; i<5; i++){
      for(j=0;j<5; j++){
        if (amizades[i][j] == amizades[j][i]){
        cont+=1;
      }
        if ((i==j) && (amizades[i][i]==1)){
          cont-=1;
        }
      }
    }
    if (cont==25){
      printf(" sim \n");
    } else{
      printf(" nao \n");
    }
    printf("%d\n", cont );

    // Implemente seu programa aqui
    // Utilize a funcao fscanf para ler da entrada padrao

    return 0;
}
