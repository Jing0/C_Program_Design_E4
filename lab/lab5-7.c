/*
 * =====================================================================================
 *
 *       Filename:  lab5-7.c
 *
 *    Description:  输出九九乘法表
 *
 *        Version:  1.0
 *        Created:  03/08/2014 00:29:35
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo , j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int i,j;
	for(i=1;i<10;i++){
		for(j=1;j<=i;j++)
			printf("%d*%d=%-4d",i,j,i*j);
		printf("\n");
	}
	return 0;
}
