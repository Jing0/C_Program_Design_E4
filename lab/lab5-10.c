/*
 * =====================================================================================
 *
 *       Filename:  lab5-10.c
 *
 *    Description: s=1+(1+2)+(1+2+3)+......,并输出其结果
 *
 *        Version:  1.0
 *        Created:  03/08/2014 00:56:44
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo , j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int i,j,n;
	float k,s=0;
	printf("Please input n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1,k=0;j<=i;j++)
			k=k+j;
		s=s+k;
	}
	printf("s=%.0f\n",s);
	return 0;
}
