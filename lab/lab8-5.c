/*
 * =====================================================================================
 *
 *       Filename:  lab8-5.c
 *
 *    Description:  三角形的面积,其中a，b，c为三角形的三边。定义两个带参的宏定义，一个用来求s，另一个用来求area，在程序中用带实参的宏名来求面积area。
 *
 *        Version:  1.0
 *        Created:  03/09/2014 22:26:20
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo , j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
#include <math.h>
#define s(a,b,c) ((float)(a+b+c)/2)
#define area(s,a,b,c) (sqrt(s*(s-a)*(s-b)*(s-c)))
int main(){
	int a,b,c;
	printf("Please input a,b,c:");
	scanf("%d %d %d",&a,&b,&c);
	printf("s=%.1f\narea=%.2f\n",s(a,b,c),area(s(a,b,c),a,b,c));
	return 0;
}
