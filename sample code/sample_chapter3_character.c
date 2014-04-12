#include <stdio.h>
int main(){
	printf("Please input a letter:\n");
	char c;
	c=getchar();
	c>='A'&&c<='Z'?(c+=32):(c-=32);
	// if(c>='A'&&c<='Z')
	// 	c+=32;
	// else
	// 	c-=32;
	printf("%c\t%d\n",c,c);
	return 0;
}