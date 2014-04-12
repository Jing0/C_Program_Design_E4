/*
 * =====================================================================================
 *
 *       Filename:  lab4-1.c
 *
 *    Description:  从键盘输入三个整数a,b,c,输出其中最大的数
 *
 *        Version:  1.0
 *        Created:  03/05/2014 23:25:49
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo , j.kuo2012@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
int main(){
	int a,b,c,t;
	printf("Please input three integer numbers:");
	scanf("%d %d %d",&a,&b,&c);
	t=a>b?a:b;
	t=t>c?t:c;
	printf("Max=%d",t);
	return 0;
}
