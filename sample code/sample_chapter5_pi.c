#include <stdio.h>
 int main(){
	int sign=-1;		//sign为正负号
	double i,n,term,pi=1.0;		//term为某一项的绝对值,n为计数器
	for(i=3.0,n=1.0;;i=i+2,n++){		//i+=2
		term=1/i;
		pi=pi+term*sign;
		sign=-sign;
		if(term<1e-6) break;
	}
	pi=pi*4;
	printf("pi=%9.7f\n",pi);
	printf("The loop has been executed %10.0f times.\n",n);
	return 0;
}

//code from textbook

/*#include <stdio.h>
#include <math.h>
int main(){
	int sign=1;
	double pi=0.0,n=1.0,term=1.0,i=0.0;
	while(fabs(term)>=1e-6){
		pi=pi+term;
		n=n+2;
		sign=-sign;
		term=sign/n;
		i=i+1;
	}
	pi=pi*4;
	printf("pi=%10.8f\n",pi);
	printf("The loop has been executed %10.0f times.",i);
	return 0;
}*/