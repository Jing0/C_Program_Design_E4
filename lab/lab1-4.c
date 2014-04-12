/*
 * =====================================================================================
 *
 *       Filename:  lab1-4.c
 *
 *    Description:  求三个数平方根的和
 *
 *        Version:  1.0
 *        Created:  03/03/2014 22:24:49
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo , j.kuo2012@gmail.com
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,s;
	printf("Please input three numbers:");
	scanf("%f,%f,%f",&a,&b,&c);
	s=sqrt(a)+sqrt(b)+sqrt(c);
	printf("The sum of square root is %f\n",s);
	return 0;
}
