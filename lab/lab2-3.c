/*
 * =====================================================================================
 *
 *       Filename:  lab2-3.c
 *
 *    Description:  每组三个数，求每组的最大数
 *
 *        Version:  1.0
 *        Created:  03/06/2014 23:05:12
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo , j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	float a,b,c,max;
	int i;
	for(i=0;i<3;i++){
		printf("Please input 3 numbers:");
		scanf("%f %f %f",&a,&b,&c);
		max=a>b?a:b;
		max=max>c?max:c;
		printf("Max=%f\n",max);
	}
	return 0;
}
