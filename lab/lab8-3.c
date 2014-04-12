/*
 * =====================================================================================
 *
 *       Filename:  lab8-3.c
 *
 *    Description: 输入两个整数，求它们相除的余数。用带参的宏来实现，并写主函数调用 
 *
 *        Version:  1.0
 *        Created:  03/09/2014 22:24:04
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo, j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
#define remainder(x,y) (x%y)
int main(){
	int x,y;
	printf("Please input two integer numbers:");
	scanf("%d %d",&x,&y);
	printf("Remainde=%d\n",remainder(x,y));
	return 0;
}
