/*
 * =====================================================================================
 *
 *       Filename:  lab9-7.c
 *
 *    Description:  编写一个程序计算一个字符串的长度。
 *
 *        Version:  1.0
 *        Created:  03/10/2014 21:45:34
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo , j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	char str[100],*p=str;
	int i=0;
	printf("Please input a string:\n");
	gets(str);
	while(*p++)
		i++;
	printf("The length of the string you just input is %d\n",i);
	return 0;
}

/*
#include <stdio.h>
int main(){
	char str[100],c;
	int n,i;
	for(n=0;(c=getchar())!='\n';n++);
	printf("The length of the string you just input is %d\n",n);
	return 0;
}
*/
