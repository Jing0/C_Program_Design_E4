/*
 * =====================================================================================
 *
 *       Filename:  lab9-6.c
 *
 *    Description:  编一个程序，从键盘上输入一串符号（以回车键为结束），将其以字符串形式存入一维字符数组，然后再输出该字符型数组中的字符串。
 *
 *        Version:  1.0
 *        Created:  03/10/2014 21:45:26
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo , j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	char str[100],c;
	int n,i;
	for(n=0;(c=getchar())!='\n';n++)
		str[n]=c;
	str[n]='\0';
	for(i=0;*(str+i)!='\0';i++)
		printf("%c",*(str+i));
	printf("\n");
	return 0;
}
