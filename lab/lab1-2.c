/*
 * =====================================================================================
 *
 *       Filename:  lab1-2.c
 *
 *    Description:  输出两个数的和，差，积，商
 *
 *        Version:  1.0
 *        Created:  03/03/2014 22:02:07
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo , j.kuo2012@gmail.com
 * =====================================================================================
 */
#include <stdio.h>
int main(){
	float a,b;
	printf("Please input two integer numbers:");
	scanf("%f,%f",&a,&b);
	printf("Sum:a+b=%f\n",a+b);	//输出两个数的和
	printf("Difference:a-b=%f\n",a-b);	//输出两个数的差
	printf("Product:a*b=%f\n",a*b);	//输出两个数的积
	printf("Quotient:a/b=%f\n",a/b);	//输出两个数的商
	return 0;
}
