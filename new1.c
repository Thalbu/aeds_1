#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tamanho 1024

struct tempo {
    // Defina os campos da sua estrutura
	int seg;
	int min;
	int hora;
};


int str2tempo (char *str){
	int i;
	int j;
	int n=1;
	int k,x,y,z;
	for(i=0;str[i]!= '\0';i++){
		for(j=strlen(str);str[j]!=58;j--){
			k=(str[j]-48)*n;
			n=n*10;
			
		}
		
		for(j=j-1;str[j]!=58;j--){
			n=1;
			x=(str[j]-48)*n;
			n=n*10;
		}
		for(j=j-1;j>=0;j--){
			n=1;
			y=(str[j]-48)*n;
			n=n*10;
		}
		z= k + (x*60) + (y*3600);
	}
	return (z);
}
	

int main(){
	
	struct tempo s;
	int segt1;
	int segt2;
	scanf("%d", &segt1);
	char str[tamanho];
	sscanf("%s",str);
	segt2 = str2tempo(str);
	int x = segt1 + segt2;
	int a=0;
	(s.seg)= x%60;
	a=x/60;
	(s.min)=a%60;
	(s.hora)=a/60;
	printf("%d;%d;%d", s.hora, s.min, s.seg);
	

	return 0;
}
