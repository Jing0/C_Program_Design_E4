/*
 * =====================================================================================
 *
 *       Filename:  lab2-2.c
 *
 *    Description:  求多项式的值
 *
 *        Version:  1.0
 *        Created:  03/05/2014 23:36:27
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo , j.kuo2012@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
int main(){
	double a=2,b=3,c=4,x=1.414,y;
	y=a*x*x*x+b*x*x+c;
	printf("a*x^3+b*x^2+c=%lf",y);
	return 0;
}
