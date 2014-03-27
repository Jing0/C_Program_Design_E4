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
	int upper,lower,space,num,other;
	char *p=str;
	for(upper=lower=space=num=other=0;*p!='\0';p++)
		if(*p>='0'&&*p<='9')
			num+=1;
		else if(*p>='A'&&*p<='Z')
			upper+=1;
		else if(*p>='a'&&*p<='z')
			lower+=1;
		else if(*p==32)
			space+=1;
		else
			other+=1;
	printf("Uppercase:%d\nUppercase:%d\nSpaces=%d\nNumbers=%d\nOther=%d\n",upper,lower,space,num,other);
}

