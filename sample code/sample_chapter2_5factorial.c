#include <stdio.h>
int main(){
	int a,b;
	a=1;
	b=1;
	while(a<5){
		a=a+1;
		b=a*b;
	}
	printf("5! is %d\n",b);
	return 0;
}