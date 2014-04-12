/*
 * =====================================================================================
 *
 *       Filename:  lab5-8.c
 *
 *    Description:  none
 *
 *        Version:  1.0
 *        Created:  03/08/2014 00:30:52
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo , j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int i,j,k;
	for(i=0;i<=9;i++){
		for(j=0;j<=9-i;j++)
			printf("   ");
		for(k=0;k<=2*i;k++)
			printf(" * ");
		printf("\n");
	}
	for(i=1;i<=9;i++){
		for(j=0;j<=i;j++)
			printf("   ");
		for(k=0;k<=18-2*i;k++)
			printf(" * ");
		printf("\n");
	}
	return 0;
}
