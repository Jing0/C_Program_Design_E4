/*
 * =====================================================================================
 *
 *       Filename:  lab9-8.c
 *
 *    Description:  编写一个程序求一个子串在一个字符串中出现的次数，如果该字符不出现则返回0。
 *
 *        Version:  1.0
 *        Created:  03/10/2014 21:56:31
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo , j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	char str[100],str_child[100];
	int count(char *str,char *str_child);
	printf("Please input the string:\n");
	gets(str);
	printf("Please input the child string:\n");
	gets(str_child);
	printf("The child string appears %d time(s) in the string.\n",count(str,str_child));
	return 0;
}
int count(char *str,char *str_child){
	if(!*str_child)
		return 0;
	char *cp=(char*)str;
	char *s1,*s2;
	int count=0;
	while(*cp){
		s1=cp;
		s2=(char*)str_child;
		while(*s1&&*s2&&!(*s1-*s2))
			++s1,++s2;
		if(!*s2)
			++count;
		++cp;
	}
	return count;
}
