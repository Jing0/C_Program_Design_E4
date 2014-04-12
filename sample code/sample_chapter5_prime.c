#include <stdio.h>
int main(){
	int n,i=2;
	printf("Please input an integer number(>3):");
	scanf("%d",&n);
	if(n==2){
		printf("2 is a prime.\n");
		EOF;
	}
	for(;i<n;i++){
		if(n%i==0){
			printf("%d is not a prime.\n",n);
			break;
		}
		else continue;
	}
	if(i==n) printf("%d is a prime.\n",n);
	return 0;
}

/*
NO.1
code from textbook

	for(i=2;i<=n-1;i++)
		if(n%i==0) break;
	if(i<n) printf("%d is not a prime number.\n",n);
	else printf("%d is a prime number.\n",n);
	return 0;
*/

/*
NO.2
code from textbook

#include <stdio.h>
#include <math.h>
int main(){
	int n,i,k;
	printf("Please enter an integer number:");
	scanf("%d",&n);
	k=sqrt(n);
	for(i=2;i<=k;i++)
		if(n%i==0) break;
	if(i<=k) printf("%d is not a prime number.\n",n);
	else print("%d is a prime number.\n");
	return 0;
}
*/

/*
prime from 100~200

#include <stdio.h>
int main(){
	int n,i;
	for(n=100;n<=200;n++){
		for(i=2;i<n;i++){
			if(n%i==0){
				break;
			}
		else continue;
		}
		if(i==n) printf("%d ",n);
	}
	putchar('\n');
	return 0;
}
*/
