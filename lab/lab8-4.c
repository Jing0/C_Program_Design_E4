/*
 * =====================================================================================
 *
 *       Filename:  lab8-4.c
 *
 *    Description:  给年份year定义一个宏，以判别该年份是否闰年，并写主函数调用宏
 *
 *        Version:  1.0
 *        Created:  03/09/2014 22:24:22
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo, j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
#define leap(x) ((x%400==0)||(x%4==0&&x%100!=0))
int main(){
	int year;
	printf("Please input a year:");
	scanf("%d",&year);
	if(leap(year))
		printf("%d is a leap year.",year);
	else
		printf("%d is not a leap year.",year);
	return 0;
}
