/*
 * =====================================================================================
 *
 *       Filename:  lab3-10.c
 *
 *    Description:  none
 *
 *        Version:  1.0
 *        Created:  03/07/2014 00:30:36
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (), j.kuo2012@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	char a,b,c;
	a=getchar();
	b=getchar();
	c=getchar();
	a=a+32;
	b=b+32;
	c=c+32;
	putchar(a);
	putchar(b);
	putchar(c);
	return 0;
}
