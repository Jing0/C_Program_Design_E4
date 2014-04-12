/*
 * =====================================================================================
 *
 *       Filename:  lab6-5.c
 *
 *    Description: 有10个学生一门课程成绩，使用选择排序法将成绩从高向低排序 
 *
 *        Version:  1.0
 *        Created:  03/08/2014 01:19:05
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (), j.kuo2012@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#define N 10
int main(){
	int a[N],i,j,t;
	printf("Please input the scores:\n");
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	for(i=0;i<N;i++)
		for(j=i;j<N;j++)
			if(a[i]<a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
	printf("The sorted scores are:\n");
	for(i=0;i<N;i++)
		printf("%d,",a[i]);
	printf("\n");
	return 0;
}
