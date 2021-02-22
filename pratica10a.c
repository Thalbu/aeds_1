#include <stdio.h>
#include <math.h>

int fatorial(int n){
	int fat = n * fatorial(n-1);
	
	return fat;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", fatorial(n));
    return 0;
}
