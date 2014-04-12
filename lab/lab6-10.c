/*
 * =====================================================================================
 *
 *       Filename:  lab6-10.c
 *
 *    Description:  将矩阵M(n,n)对角线上的元素置为1，其余元素置为0。
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
 	int i,j,n;
 	printf("Please input n:");
 	scanf("%d",&n);
 	int m[n][n];
 	for(i=0;i<n;i++)
 		for(j=0;j<n;j++)
 			if(i==j)
 				m[i][j]=1;
 			else
 				m[i][j]=0;
 	for(i=0;i<n;i++){
 		for(j=0;j<n;j++)
 			printf("%d ",m[i][j]);
 		printf("\n");
 	}
 	return 0;
 }