/*
 * =====================================================================================
 *
 *       Filename:  lab1-3.c
 *
 *    Description:  输入5个数，求这5个输的平方和
 *        
 *        Version:  1.0
 *        Created:  03/03/2014 22:09:30
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo , j.kuo2012@gmail.com
 * =====================================================================================
 */
#include <stdio.h>
int main(){
	float x1,x2,x3,x4,x5,y;
	printf("Please input five integer numbers:");
	scanf("%f,%f,%f,%f,%f",&x1,&x2,&x3,&x4,&x5);
	y=x1*x1+x2*x2+x3*x3+x4*x4+x5*x5;
	printf("The sum of square is %5.0f\n",y);
	return 0;
}
