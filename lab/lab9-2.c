/*
 * =====================================================================================
 *
 *       Filename:  lab9-2.c
 *
 *    Description:  输入n（不大于20）个单精度数存入一维数组，用指针变量处理数组元素的方式将其逆序存放后输出。n从键盘输入。
 *
 *        Version:  1.0
 *        Created:  03/10/2014 21:44:51
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo, j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n;
	printf("Please input n:");
	scanf("%d",&n);
	float a[n],*p;
	printf("Please input array[n]:\n");
	for(p=a+n-1;p>=a;p--)
		scanf("%f",p);
	for(p=a;p<a+n;p++)
		printf("%f ",*p);
	return 0;
}
