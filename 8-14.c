#include <stdio.h>
#define N 10
int main(){
	void sort(int *p);
	int a[N],*p;
	printf("Please input %d numbers:\n",N);
	for(p=a;p<a+N;p++)
		scanf("%d",p);
	sort(p);
	return 0;
}
void sort(int *p){
	printf("Sorted:\n");
	int *t=p--;
	for(;p>=t-N;p--)
		printf("%d ",*p);
}
