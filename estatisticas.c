#include <stdio.h>
#include <math.h>
float cauchy(float x){
	float y;
	float pi=3.141592;
	y=1/(pi*(1+(x*x)));
	return (y);
}
float gumbel (float x, float m, float b){
	float y;
	float e = M_E; 
	printf("%.4f\n", e);
	printf("%.4f\n", x);
	printf("%.4f\n", m);
	printf("%.4f\n", b);
	float z = (x-m)/b;
	printf("%.4f\n", z);
	float pot = pow(e,-z);
	printf("%.4f\n", pot);
	float aux= -(z+pot);
	printf("%.4f\n", aux);
	float pot2 = pow (e,aux);
	printf("%.4f\n", pot2);
	y = (1/b)* pot2;
	return (y);
}
float laplace(float x,float m,float b){
	float y;
	float e = M_E;
	float a;
	if((x-m)>0){
		a=(x-m);
	}
	if((x-m)<0){
		a=(-1)*(x-m);
	}
	float pot = pow(e,(-a/b));
	y=(1/(2*b))*pot;
	return (y);
}

int main(void){
	int f;
	scanf("%d",&f);
	
	if(f==1){
		float x;
		scanf("%f",&x);
		printf("%.2f\n", cauchy(x));
	}
	if(f==2){
		float x, m, b;
		scanf("%f %f %f", &x, &m, &b);
		printf("%.2f", gumbel(x,m,b));
	}
	if(f==3){
		float x, m, b;
		scanf("%f %f %f", &x, &m, &b);
		printf("%.2f", laplace (x,m,b));
	}
	
return 0;	
}
