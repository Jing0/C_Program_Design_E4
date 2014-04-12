/*
 * =====================================================================================
 *
 *       Filename:  lab6-7.c
 *
 *    Description:  有一个m×n矩阵，各元素值由随机数产生，将矩阵增加一列，求矩阵每一行的元素值的和，并将每一行的元素值的和放入增加列。
 *
 *        Version:  1.0
 *        Created:  03/08/2014 23:02:00
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo, j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define random(x) (rand()%x)
int main(){
	int m,n,i,j,t;
	printf("Please input m,n:");
	scanf("%d %d",&m,&n);
	int a[m][n],b[m][n+1];
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			a[i][j]=random(100);
	printf("Original array:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
			printf("%5.0d ",a[i][j]);
		printf("\n");
	}
	for(i=0;i<m;i++){
		for(j=0,t=0;j<n;j++){
			b[i][j]=a[i][j];
			t+=b[i][j];
		}
		b[i][n]=t;
	}
	printf("New array:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n+1;j++)
			printf("%5.0d ",b[i][j]);
		printf("\n");
	}
	return 0;
}