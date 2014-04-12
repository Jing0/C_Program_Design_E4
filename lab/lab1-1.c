/*
 * =====================================================================================
 *
 *       Filename:  lab1-1.c
 *
 *    Description:  求三个整数的和
 *
 *        Version:  1.0
 *        Created:  03/03/2014 21:41:59
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (), j.kuo2012@gmail.com
 * =====================================================================================
 */
#include <stdio.h>
int main(){
	int a,b,c;
	printf("Please input three integer numbers:");
	scanf("%d,%d,%d",&a,&b,&c);
	printf("sum=%d\n",a+b+c);
	return 0;
}

