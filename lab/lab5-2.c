/*
 * =====================================================================================
 *
 *       Filename:  lab5-2.c
 *
 *    Description:  none
 *
 *        Version:  1.0
 *        Created:  03/07/2014 01:08:24
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo, j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int i,j;
	for(i=0;i<10;i++){
		for(j=0;j<9-i;j++)
			printf(" ");
		for(j=0;j<=2*i;j++)
			printf("%d",i);
		printf("\n");
	}
	return 0;
}
