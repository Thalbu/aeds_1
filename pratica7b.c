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
 
int str2tempo (int y,int x, int k){
 	int z = (y*3600)+(x*60)+k;
 	return (z);
 }

int main(){
	
	struct tempo s;
 	int segt1;
 	int segt2;
 	int d,b,c;
 	scanf("%d", &segt1);
   	scanf("%d:%d:%d",&d,&b,&c);
   	printf("%d\n", segt2);
   	segt2= str2tempo (d,b,c);
  	int x = segt1 + segt2;
   	int a=0;
  	(s.seg)= x%60;
   	a=x/60;
  	(s.min)=a%60;
 	(s.hora)=a/60;
   	printf("%d:%d:%d\n", s.hora, s.min, s.seg);
   	
   
 	return 0;
  }