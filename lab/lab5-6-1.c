/*
 * =====================================================================================
 *
 *       Filename:  lab5-6-1.c
 *
 *    Description:  none
 *
 *        Version:  1.0
 *        Created:  03/08/2014 00:24:13
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo, j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int i,j;
	float n,s=0;
	for(i=1;i<=10;i++){
		for(j=1,n=1;j<=i;j++)
			n=n*j;
		s+=n;
	}
	printf("s=%.0f\n",s);
	return 0;
}
