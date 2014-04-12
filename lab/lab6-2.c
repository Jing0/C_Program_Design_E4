/*
 * =====================================================================================
 *
 *       Filename:  lab6-2.c
 *
 *    Description:  求出n个学生一门课程中的最高成绩和最低成绩及高于平均成绩的人数
 *
 *        Version:  1.0
 *        Created:  03/08/2014 01:18:14
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo, j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,i,people=0;
	float high=0,low,sum=0;
	printf("Please input n:");
	scanf("%d",&n);
	float a[n];
	printf("Please input scores:\n");
	for(i=0;i<n;i++){
		scanf("%f",&a[i]);
		sum=sum+a[i];
	}
	for(i=0,low=a[0];i<n;i++){
		if(a[i]>high)
			high=a[i];
		if(a[i]<low)
			low=a[i];
		if(a[i]>(sum/n))
			people++;
	}
	printf("Highest score:%.3f\nLowest score:%.3f\n",high,low);
	printf("People below the average:%d\n",people);
	return 0;
}
