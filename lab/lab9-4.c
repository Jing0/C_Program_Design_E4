/*
 * =====================================================================================
 *
 *       Filename:  lab9-4.c
 *
 *    Description: 用12个月的英文名称初始化一个字符指针数组，当键盘输入整数为1到12时，先是相应的月份名，键入其他整数时显示错误信息 
 *
 *        Version:  1.0
 *        Created:  03/10/2014 21:45:06
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo , j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	char month[12][10]={"January","February","March","April","May","June","July","August","September","October","Novemver","December"};
	int n;
	printf("Please input a number(1~12):");
	scanf("%d",&n);
	if(n<1||n>12)
		printf("\aError!\n");
	else
		printf("%s\n",*(month+n-1));
	return 0;
}
    
