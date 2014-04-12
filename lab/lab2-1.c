/*
 * =====================================================================================
 *
 *       Filename:  lab2-1.c
 *
 *    Description:  求4个数中的最小数
 *
 *        Version:  1.0
 *        Created:  03/05/2014 23:19:19
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo, j.kuo2012@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
int main(){
	float a,b,c,d,max;
	printf("Please input four numbers:");
	scanf("%f %f %f %f",&a,&b,&c,&d);
	max=a>b?a:b;
	max=max>c?max:c;
	max=max>d?max:d;
	printf("Max=%6.3f",max);
	return 0;
}
