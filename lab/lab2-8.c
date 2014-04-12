/*
 * =====================================================================================
 *
 *       Filename:  lab2-8.c
 *
 *    Description:  求下列各式复合赋值后a的值
 *    		int a=2; a+=a;  a-=a;  a*=2+3;  a%=(a%=2);  a/=a+a;
 *
 *        Version:  1.0
 *        Created:  03/06/2014 23:22:18
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo , j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int a=2;
	printf("%d\n",a);
	a+=a;
	printf("%d\n",a);
	a-=2;
	printf("%d\n",a);
	a*=2+3;
	printf("%d\n",a);
	a%=(a%=2);
	printf("%d\n",a);
	a/=a+a;
	printf("%d\n",a);
	return 0;
}
