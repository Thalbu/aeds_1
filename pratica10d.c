#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void hanoi(int n, char de, char para, char aux){
	if(n==1){
		printf("move disco 1 de a para b\n");
		reutrns;
	}else{
	honai(n-1, de, aux, para);
	printf("move disco %d de %s para %s", n , de, para);
	honai(n-1, de, para,aux);
	}

}
int main() {
    int n;
    scanf("%d", &n);
    hanoi(n, 'a', 'b', 'c');
	
    return 0;
}
