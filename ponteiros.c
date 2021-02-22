#include <stdio.h>
#include <stdlib.h>

void teste (int x){
	++x;
}

void pont(int *p){
	++*p;
}

int main(){
	int x;
	int *ponteiro;
	ponteiro=&x;
	*ponteiro = 10;
	
	teste(x);
	pont(ponteiro);
	
	printf("%d\n", *ponteiro);
	printf("%d\n", x);
	
	
	return 0;
}
	
	
	