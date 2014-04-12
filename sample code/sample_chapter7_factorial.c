#include <stdio.h>
int main(){
	int factorial(int n),n;
	printf("Please input n(>=0):");
		scanf("%d",&n);
	while(n<0){
		printf("ERROR!\aPlease input n(>=0):");
		scanf("%d",&n);
	}
	printf("%d!=%d\n",n,factorial(n));
	return 0;
}
int factorial(int n){
	int f=1;
	if(n!=1&&n!=0)
		f=factorial(n-1)*n;
	return f;
}