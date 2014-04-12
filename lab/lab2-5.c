/*
 * =====================================================================================
 *
 *       Filename:  lab2-5.c
 *
 *    Description:  已知华氏温度，根据公式求摄氏温度C（结果保留两位小数）
 *
 *        Version:  1.0
 *        Created:  03/06/2014 23:16:12
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
	float f,c;
	printf("Please input Fahrenheit:");
	scanf("%f",&f);
	c=5*(f-32)/9;
	printf("Celsius:%6.2f",c);
	return 0;
}
