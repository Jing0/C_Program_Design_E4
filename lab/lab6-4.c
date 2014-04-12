/*
 * =====================================================================================
 *
 *       Filename:  lab6-4.c
 *
 *    Description: 将一个一维数组反序放置 
 *
 *        Version:  1.0
 *        Created:  03/08/2014 01:18:34
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo, j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
#define N 10
int main(){
	int a[N]={0,1,2,3,4,5,6,7,8,9},i,t;
	printf("Original array:\n");
	for(i=0;i<N;i++)
		printf("%d ",a[i]);
	printf("\n");
	for(i=0;i<(N/2);i++){
		t=a[i];
		a[i]=a[N-1-i];
		a[N-1-i]=t;
	}
	printf("Reversed array:\n");
	for(i=0;i<N;i++)
		printf("%d ",a[i]);
	return 0;
}
