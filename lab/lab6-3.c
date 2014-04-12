/*
 * =====================================================================================
 *
 *       Filename:  lab6-3.c
 *
 *    Description:  使用数组，求出下列数列的前20项：
 *    			1，1，2，4，7，13......
 *
 *        Version:  1.0
 *        Created:  03/08/2014 01:18:23
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo, j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	float a[20]={1,1,2};
	int i;
	for(i=3;i<20;i++)
		a[i]=a[i-1]+a[i-2]+a[i-3];
	for(i=0;i<20;i++)
		printf("%.0f ",a[i]);
	return 0;
}
