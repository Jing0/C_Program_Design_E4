/*
 * =====================================================================================
 *
 *       Filename:  lab9-10.c
 *
 *    Description:  输入一个3×6的二维整数数组，输出其中最大值、最小值及其所在的行列下标。
 *
 *        Version:  1.0
 *        Created:  03/11/2014 12:55:27
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo, j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int a[3][6],max,min,n1,n2,*p;
	printf("Please input a[3][6]:\n");
	for(p=a[0];p<a[0]+18;p++)
		scanf("%d",p);
	max=min=a[0][0];
	n1=n2=1;
	for(p=a[0];p<a[0]+18;p++){
		if(*p>max){
			max=*p;
			n1=p-a[0];
		}
		if(*p<min){
			min=*p;
			n2=p-a[0];
		}
	}
	printf("Max=%d,Column=%d,Row=%d\n",max,n1/6+1,n1%6+1);
	printf("Min=%d,Column=%d,Row=%d\n",min,n2/6+1,n2%6+1);
	return 0;
}
