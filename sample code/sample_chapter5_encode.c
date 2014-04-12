#include <stdio.h>
int main(){
	char c;
	for(;(c=getchar())!='\n';){
		if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
			c=c+4;
			if((c>='Z'&&c<'Z'+4)||(c>'z'))
				c=c-26;
		}
		printf("%c",c);
	}
	putchar('\n');
	return 0;
}

/*
//code from textbook

int main(){
	char c;
	c=getchar();
	while(c!='\n'){
		if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
			if((c>='W'&&c<='Z')||(c>='w'&&c<='z')) c=c-2;
			else c=c+4;
		}
		printf("%c",c);
		c=getchar();
	}
	printf("\n");
	return 0;
}*/