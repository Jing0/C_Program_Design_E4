/*
 * =====================================================================================
 *
 *       Filename:  lab6-1.c
 *
 *    Description:  用随机函数产生15个100以内的随即证书存入一位数组，然后分三行输出，每行5个数 
 *
 *        Version:  1.0
 *        Created:  03/08/2014 01:18:04
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo , j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define random(x) (rand()%x)
int main(){
	int a[15],i,j,n=0;
	for(i=0;i<15;i++)
		a[i]=random(100);
	for(i=0;i<3;i++){
		for(j=0;j<5;j++,n++)
			printf("%d ",a[n]);
		printf("\n");	
	}
	return 0;
}
