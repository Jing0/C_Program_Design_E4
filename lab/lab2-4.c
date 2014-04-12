/*
 * =====================================================================================
 *
 *       Filename:  lab2-4.c
 *
 *    Description:  输入a，bl分别求他们的积、商和余数
 *
 *        Version:  1.0
 *        Created:  03/06/2014 23:09:33
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo, j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	float a,b,product,quotient,remainder;
	printf("Please input a,b:");
	scanf("%f %f",&a,&b);
	product=a*b;
	quotient=a/b;
	remainder=(int)a%(int)b;
	printf("Product=%f\nQuotient=%f\nRemainder=%f\n",product,quotient,remainder);
	return 0;
}
