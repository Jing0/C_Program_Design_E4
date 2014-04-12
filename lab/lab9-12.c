/*
 * =====================================================================================
 *
 *       Filename:  lab9-12.c
 *
 *    Description:  设计一个函数把两个整数形参中较大的那个数的地址作为函数值返回，          并编写主函数实现调用。
 *
 *        Version:  1.0
 *        Created:  03/11/2014 12:56:11
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo, j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int a[2],*p;
	int *max_address(int []);
	for(p=a;p<a+2;p++)
		scanf("%d",p);
	printf("Address of the bigger is %d",*max_address(a));
	return 0;
}
int *max_address(int a[2]){
	return a[2]>a[1]?&a[2]:&a[1];
}
