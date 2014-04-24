#include <stdio.h>
#include <string.h>
void sort(char *s[]){
	int i,j;
	char *temp;
	for(i=0;i<9;i++)
		for(j=0;j<9-i;j++)
			if(strcmp(*(s+j),*(s+j+1))>0){
				temp=*(s+j);
				*(s+j)=*(s+j+1);
				*(s+j+1)=temp;
			}
}
int main(){
	int i;
	char *p[10],str[10][20];
	for(i=0;i<10;i++)
		p[i]=str[i];       
	printf("Please input 10 strings:\n");
	for(i=0;i<10;i++)
		scanf("%s",p[i]);
	sort(p);
	printf("Now,the result is:\n");
	for(i=0;i<10;i++)
		printf("%s\n",p[i]);
	return 0;
}
