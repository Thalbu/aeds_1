#include <stdio.h>
#define NUN_USERS 5

int main() {

  int amizades[NUN_USERS][NUN_USERS];
	int v;
	int j;
	int i;

	for (i=0; i<5; i++){
		for(j=0; j<5; j++){
			fscanf (stdin,"%d", &v);
			amizades [i][j] = v;
		}
	}
	for ( i=0; i<5; i++){
		for( j=0; j<5; j++){
		if ((amizades [i] [j]== 1) && (i!=j) && (i<j)){
      if (i>j) {
        printf ("%d %d \n", j, i );
      }
      else if (i<j){
		      printf ("%d %d \n", i, j );
		      }
    }
		// if(amizades [i] [j]=0){
		// printf("%d \n",amizades [i] [j]);
		}
		}

    // Implemente seu programa aqui
    // Utilize a funcao fscanf para ler da entrada padrao

    return 0;
}
