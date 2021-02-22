#include <stdio.h>
#include <stdlib.h>

void hanoi(int n, char de, char para, char aux){
	if(n == 1){
		printf("move disco 1 de %c para %c\n", de, para);
		return;
	}
	hanoi(n-1, de, aux, para);
    printf("move disco %d de %c para %c\n", n, de, para);
    hanoi(n-1, aux, para, de);
}

int main() {
    int n;
    scanf("%d", &n);
    hanoi(n, 'a', 'b', 'c');
    return 0;
}
