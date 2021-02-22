#include <stdio.h>
#define BUFSZ 256

int main(void){
	char line[BUFSZ];
	fgets(line, BUFSZ, stdin);
	
	int a=0;
	int b=0;
	int c=0;
	
	scanf("%d %d %d\n", &a, &b, &c);
	
	if(a<0){
	a=(-1)*a;
	}
	if(b<0){
	b=(-1)*b;
	}
	if(c<0){
	c=(-1)*c;
	}
	if(a<b){
	a=b;
	}
	if(a<c){
	a=c;
	}
	printf("O valor absoluto eh %d\n", a);

	return 0;
}
