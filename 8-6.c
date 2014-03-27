#include <stdio.h>
int main(){
	char str[100],*p;
	int strlength(char *p);
	printf("Please input a string:");
	gets(str);
	p=str;
	printf("The length of the string is %d\n",strlength(p));
	return 0;
}
int strlength(char *p){
	int i=0;
	for(;*p!='\0';i++,p++)
		;
	return i;
}
