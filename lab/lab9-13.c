/*
 * =====================================================================================
 *
 *       Filename:  lab9-13.c
 *
 *    Description:  输入5个字符串，从中找出最大的字符串并输出。要求用二维字符数组存放这5个字符串。
 *
 *        Version:  1.0
 *        Created:  03/11/2014 12:56:30
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo, j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
int main(){
	char a[5][100],*p[5],**q,**max;
	int i;
	for(i=0;i<5;i++)
		p[i]=a[i];
	printf("Please input five strings:\n");
	for(i=0;i<5;i++)
		gets(p[i]);
	max=&p[0];
	q=&p[1];
	for(i=1;i<5;i++,q++)
		if(strcmp(*max,*q)<0)
			max=q;
	printf("The biggest string is\n");
	puts(*max);
	return 0;
}
