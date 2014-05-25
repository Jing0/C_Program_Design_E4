#include <stdio.h>
void move(int array[20],int n,int m){
	int *p,array_end;
	array_end=*(array+n-1);
	for(p=array+n-1;p>array;p--)
		*p=*(p-1);
	*array=array_end;
	m--;
	if(m>0)
		move(array,n,m);  
}
int main(){
	int number[20],n,m,i;
	printf("How many numbers?:");
	scanf("%d",&n);
	printf("Please input %d numbers:\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&number[i]);
	printf("How many place you want move?");
	scanf("%d",&m);
	move(number,n,m);
	printf("The result is:\n");
	for(i=0;i<n;i++)
		printf("%d  ",number[i]);
	printf("\n");
	return 0;
}
