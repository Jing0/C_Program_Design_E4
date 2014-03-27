#include <stdio.h>
#define N 13
int main(){
	int m,i;
	char str[N]="Hello World!",new[13],*p=str;
	printf("The string is \"%s\"\n",p);
	printf("Please input m(m<13):");
	scanf("%d",&m);
	for(p+=m,i=0;p<str+N;p++,i++)
		new[i]=*p;
	printf("The new string is \"%s\"\n",new);
	return 0;
}
