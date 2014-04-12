/*
 * =====================================================================================
 *
 *       Filename:  lab8-1.c
 *
 *    Description:  设计一个判断奇数的带参宏。在主函数中连续读取函数，直到输入的整数是奇数时中止程序运行。
 *
 *        Version:  1.0
 *        Created:  03/09/2014 22:23:40
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo, j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
#define oddoreven(n) (n%2)	//偶数返回0，奇数返回1
int main(){
	int input();
	for(;!oddoreven(input());)
		input();
	return 0;
}
int input(){
	int n;
	printf("Please input an odd number:");
	scanf("%d",&n);
	return n;
}
