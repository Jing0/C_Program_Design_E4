/*
 * =====================================================================================
 *
 *       Filename:  lab5-1.c
 *
 *    Description:  none
 *
 *        Version:  1.0
 *        Created:  03/07/2014 01:07:04
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo, j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,s=0;
	for(n=1;n<=100;n++)
		s+=n;
	printf("%d",s);
	return 0;
}
