#include <stdio.h>

int main(int argc, char **argv){
FILE *lista = fopen ("lista.txt", "r");
FILE *pares = fopen ("pares.txt", "w");
FILE *impares = fopen ("impares.txt", "w");
int i;
int n;
	for( i=0 ; i<1000 ; i++){
		
		fscanf(lista,"%d",&n);
			if (n%2==0){
				fprintf(pares,"%d\n",n);
			}
			else{
				fprintf(impares,"%d\n",n);
			}
	}
	fclose(lista);
	fclose(pares);
	fclose(impares);


return 0;

}

