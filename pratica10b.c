#include <stdio.h>
#include <math.h>

int fibonacci (int n){
	if(n<1){
		return (0);
	}
	if((n==1) || (n==2)){
		return (1);
	}
	if(n==3){
		return (2);
	}
	int fibo;
	fibo=0;
	fibo = fibonacci(n-1)+fibonacci(n-2);
	
	return (fibo);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", fibonacci(n));
    return 0;
}

