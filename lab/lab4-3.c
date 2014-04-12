/*
 * =====================================================================================
 *
 *       Filename:  lab4-3.c
 *
 *    Description:  一个函数，写一个程序，输入整数X，输出Y的值
 *
 *        Version:  1.0
 *        Created:  03/05/2014 22:58:46
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo, j.kuo2012@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int x,y;
	printf("please input x:");
	scanf("%d",&x);
	if(x<1)
		y=x;
	else if(x>=10)
		y=3*x-11;
	else
		y=2*x-1;
	printf("y=%d",y);
	return 0;
}
