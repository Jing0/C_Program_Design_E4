#include <stdio.h>
#include <string.h>
#define SIZE 10
int main(){
	char str[SIZE][100];
	void sort(char str[SIZE][100]);
	int i;
	printf("Please input 10 strings:\n");
	for(i=0;i<SIZE;i++)
		scanf("%s",str[i]);
	sort(str);
	printf("The new strings are:\n");
	for(i=0;i<SIZE;i++)
		printf("%s\n",str[i]);
	return 0;
}
void sort(char str[SIZE][100]){
	int i,j;
	char temp[100];
	for(i=0;i<SIZE-1;i++)
		for(j=i+1;j<SIZE;j++)
			if(strcmp(str[i],str[j])>=0){
				strcpy(temp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],temp);
			}
}
