#include <stdio.h>
#define N 10
int main(){
	int a[N];
	int i,m,n;
	int max(int x,int y);
	printf("Please input %d integer numbers:",N);
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	for(i=0,m=a[0];i<N;i++)
		if(max(m,a[i])>m){
			m=max(m,a[i]);
			n=i;
		}
	printf("The biggest number is the %dth number:%d\n",n,m);
	return 0;
}
int max(int x,int y){
	return(x>y?x:y);
}