/*
 * =====================================================================================
 *
 *       Filename:  lab1-5.c
 *
 *    Description:  输入圆的半径，求圆的面积和周长
 *
 *        Version:  1.0
 *        Created:  03/03/2014 22:32:26
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (), j.kuo2012@gmail.com
 * =====================================================================================
 */
#include <stdio.h>
#define PI 3.1415926
int main(){
	int r;
	float s,l;
	printf("Please input the radius of the circle:");
	scanf("%d",&r);
	s=PI*r*r;
	l=2*PI*r;
	printf("The measure of area is %f\nThe circumference is %f\n",s,l);
	return 0;
}
