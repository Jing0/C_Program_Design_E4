/*
 * =====================================================================================
 *
 *       Filename:  lab2-6.c
 *
 *    Description:  使用宏定义定义符号常量PI，其值为3.14159，并使用符号常量，求圆半径r=2.456时的圆周长，圆面积
 *
 *        Version:  1.0
 *        Created:  03/06/2014 23:17:56
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo , j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
#define PI 3.14159
int main(){
	float r,s,l;
	r=2.456;
	s=PI*r*r;
	l=2*PI*r;
	printf("The measure of area is %f\n",s);
	printf("The circumference is %f\n",l);
	return 0;
}
