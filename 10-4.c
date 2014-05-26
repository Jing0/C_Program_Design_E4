#include <stdio.h>
#include <stdlib.h>
int main (){
	FILE *fp;
	int i,j,n,i1;
	char c[100],t,ch;
	if((fp=fopen("a1","r"))==NULL){
		printf("\ncan not open file\n");
		exit(0);
	}
	printf("file A :\n");
	for(i=0;(ch=fgetc(fp))!=EOF;i++){
		c[i]=ch;
		putchar(c[i]);
	}
	fclose(fp);
	i1=i;
	if((fp=fopen("b1","r"))==NULL){
		printf("\ncan not open file\n");
		exit(0);
	}
	printf("\nfile B:\n");
	for(i=i1;(ch=fgetc(fp))!=EOF;i++){
		c[i]=ch;
		putchar(c[i]);
	}
	fclose(fp);
	n=i;
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(c[i]>c[j]){
				t=c[i];
				c[i]=c[j];
				c[j]=t;
			}
	printf("\nfile C :\n");
	fp=fopen("c1","w");
	for(i=0;i<n;i++){
		putc(c[i],fp);
		putchar(c[i]);
	}
	printf("\n");
	fclose(fp);
	return 0;
}
