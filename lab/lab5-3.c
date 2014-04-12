/*
 * =====================================================================================
 *
 *       Filename:  lab5-3.c
 *
 *    Description:  none
 *
 *        Version:  1.0
 *        Created:  03/07/2014 01:12:50
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo , j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
#include <math.h>
int main(){
	int n=1,sign=1;
	float an=1/(n*n+1),sum=0.0;
	for(;an>1e-5;n++,sign=-sign){
		an=sign/(n*n+1);
		sum+=an;
	}
	printf("Sum=%f",sum);
	return 0;
}
