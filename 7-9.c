#include <stdio.h>
int main(){
	char str[100];
	void count(char str[]);
	printf("Please input a character string:\n");
	gets(str);
	count(str);
	return 0;
}
void count(char str[]){
	int i,letter,num,space,other;
	for(i=letter=num=space=other=0;str[i]!='\0';i++)
		if(str[i]>='0'&&str[i]<='9')
			num+=1;
		else if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
			letter+=1;
		else if(str[i]==32)
			space+=1;
		else
			other+=1;
	printf("Letters:%d\nNumbers:%d\nSpaces:%d\nOthers:%d\n",letter,num,space,other);
}
