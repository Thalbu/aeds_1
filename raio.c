#include <stdio.h>

int main(){
	int n,i,j,a,b;
	
	scanf("%d", &n);
	b=n;
	for(j=n;j>1;j--){
		for(i=1; i<b ; i++){
			printf("*");
		}
		printf("*\n");
		n=b;
		for(a=0;a<n;a++){
			for(i=0; i<(n-2) ;i++){
				printf(" ");
			}
			
			printf("*\n");
			
			n--;
		}
		b--;
	}
	


	return 0;
}
