/*
 * =====================================================================================
 *
 *       Filename:  lab5-6-2.c
 *
 *    Description:  none
 *
 *        Version:  1.0
 *        Created:  03/08/2014 00:24:43
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (), j.kuo2012@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int i;
	float s=0;
	for(i=10;i>=1;i--)
		s=i*(1+s);
	printf("s=%.0f\n",s);
	return 0;
}
