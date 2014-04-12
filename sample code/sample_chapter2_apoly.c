#include <stdio.h>
int main(){
	int b=1;
	double a=1.0;
	double c=1.0;
	while(a<100){
		b=-b;
		a=a+1;
		c=c+b/a;
	}
	printf("The result is %f\n",c);
	return 0;
}
/*
sample code from textbook

#include <stdio.h>
int main(){
	int sign=1;
	double deno=2.0,sum=1.0,term;
	while(deno<=100){
		sign=-sign;
		term=sign/deno;
		sum=sum+term;
		deno=deno+1;
	}
	printf("%f\n",sum);
	return 0;
}
*/