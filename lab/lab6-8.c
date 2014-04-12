/*
 * =====================================================================================
 *
 *       Filename:  lab6-8.c
 *
 *    Description:  有一个m×n矩阵，找出最大元素值及其最大元素值所在的行、列位置。
 *
 *        Version:  1.0
 *        Created:  03/08/2014 23:30:00
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo, j.kuo2012@gmail.com
 * =====================================================================================
 */
 #include <stdio.h>
 int main(){
 	int i,j,m,n,col,row,max;
 	printf("Please input m,n:");
 	scanf("%d %d",&m,&n);
 	int a[m][n];
 	printf("Please input the matrix:\n");
 	for(i=0;i<m;i++)
 		for(j=0;j<n;j++)
 			scanf("%d",&a[i][j]);
 	max=a[0][0];
 	for(i=0;i<m;i++)
 		for(j=0;j<n;j++){
 			if(a[i][j]>max){
 				max=a[i][j];
 				col=j;
 				row=i;
 			}
 		}
 	printf("Max:%d\nColumn:%d\nRow:%d\n",max,col+1,row+1);
 	return 0;
 }