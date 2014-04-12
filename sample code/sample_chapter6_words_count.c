#include <stdio.h>
int main(){
	char string[100];
	int i,num=0,word=0;
	printf("Please input a character string:");
	char c;
	gets(string);
	for(i=0;(c=string[i])!='\0';i++)
		if(c==' ')
			word=0;
		else if(word==0){
			word=1;
			num++;
		}
	printf("There are %d words in this line.\n",num);
	return 0;
}