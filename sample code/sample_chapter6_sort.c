/*#include <stdio.h>
int main(){
	int i,j,s[10],t;
	printf("Please input 10 numners:");
	for(i=0;i<=9;i++)
		scanf("%d",&s[i]);
	for(i=0;i<=9;i++)
		for(j=i;j<=9;j++)
			if(s[i]>s[j]){
				t=s[i];
				s[i]=s[j];
				s[j]=t;
			}
	printf("The sorted numbers are:");
	for(i=0;i<=9;i++)
		printf("%d,",s[i]);
	printf("\n");
	return 0;
}*/

//Ã°ÅİÅÅĞò
#include <stdio.h>
int main(){
	int i,j,s[10],t;
	printf("Please input 10 numners:");
	for(i=0;i<=9;i++)
		scanf("%d",&s[i]);
	for(j=0;j<9;j++)
		for(i=0;i<9-j;i++)
			if(s[i]>s[i+1]){
				t=s[i];
				s[i]=s[i+1];
				s[i+1]=t;
			}
	printf("The sorted numbers are:");
	for(i=0;i<=9;i++)
		printf("%d,",s[i]);
	printf("\n");
	return 0;
}