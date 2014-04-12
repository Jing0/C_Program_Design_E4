/*
 * =====================================================================================
 *
 *       Filename:  lab9-5.c
 *
 *    Description:  用选择法对10个整数排序(降序)。
 *
 *        Version:  1.0
 *        Created:  03/10/2014 21:45:17
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo , j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int a[10],*p,i,j,t;
	for(p=a;p<(a+10);p++)
		scanf("%d",p);
	for(p=a,j=0;p<(a+10);p++,j++)
		for(i=1;i<(10-j);i++)
			if(*p>*(p+i)){
				t=*p;
				*p=*(p+i);
				*(p+i)=t;
			}
	for(p=a;p<(a+10);p++)
		printf("%d ",*p);
	return 0;
}
