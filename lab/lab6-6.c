/*
 * =====================================================================================
 *
 *       Filename:  lab6-6.c
 *
 *    Description:  将一个一维数组a[9]中各元素值按行的顺序放入二维数组b[3×3]。
 *
 *        Version:  1.0
 *        Created:  03/08/2014 22:45:00
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (), j.kuo2012@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int i,j,n,a[9],b[3][3];
	printf("Please input a[9]:\n");
	for(i=0;i<9;i++)
		scanf("%d",&a[i]);
	printf("\n");
	for(i=0,n=0;i<3;i++)
		for(j=0;j<3;j++,n++)
			b[i][j]=a[n];
	printf("b[3][3]:\n");
	for(i=0,n=0;i<3;i++){
		for(j=0;j<3;j++)
			printf("%d ",b[i][j]);
		printf("\n");
	}
	return 0;
}
