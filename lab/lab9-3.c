/*
 * =====================================================================================
 *
 *       Filename:  lab9-3.c
 *
 *    Description:  利用指针完成两个变量值互换。
 *
 *        Version:  1.0
 *        Created:  03/08/2014 23:06:00
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo, j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
int main(){
 	int a,b,*p1,*p2,t;
 	printf("Please input a,b:");
 	scanf("%d %d",&a,&b);
 	p1=&a;
 	p2=&b;
 	t=p1;
 	p1=p2;
 	p2=t;
 	printf("%d %d\n",*p1,*p2);
 	return 0;
}