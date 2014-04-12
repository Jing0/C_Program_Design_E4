/*
 * =====================================================================================
 *
 *       Filename:  lab9-9.c
 *
 *    Description:  输入2行3列的矩阵元素值，存入二维数组；再按行列格式输出。
 *
 *        Version:  1.0
 *        Created:  03/11/2014 12:55:01
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo, j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int a[2][3],*p;
	printf("Please input a[2][3]:\n");
	for(p=a[0];p<a[0]+6;p++)
		scanf("%d",p);
	printf("a[2][3]:\n");
	for(p=a[0];p<a[0]+6;p++){
		printf("%d ",*p);
		if((p-a[0]+1)%3==0)
			printf("\n");
	}
	return 0;
}
