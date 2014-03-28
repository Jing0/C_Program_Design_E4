#include <stdio.h>
#include <stdlib.h>
int main(){
	char c;
	FILE *fp;
	if((fp=fopen("test","w"))==NULL){
		printf("cannot open file");
		exit(0);
	}
	printf("Please input a string(end whit '!'):\n");
	while((c=getchar())!='!'){
		if(c>='a'&&c<='z')
			c-=32;
		fputc(c,fp);
		putchar(c);
	}
	putchar(10);
	fclose(fp);
	return 0;
}
