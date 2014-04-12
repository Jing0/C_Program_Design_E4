/*
 * =====================================================================================
 *
 *       Filename:  lab5-5.c
 *
 *    Description:  求出斐波那契数列的前20项
 *
 *        Version:  1.0
 *        Created:  03/07/2014 01:19:18
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
	int f[20]={0,1};
	for(i=2;i<20;i++)
		f[i]=f[i-2]+f[i-1];
	for(i=0;i<20;i++){
		printf("%d ",f[i]);
	}
	printf("\n");
	return 0;
}
