/*
 * =====================================================================================
 *
 *       Filename:  lab5-9.c
 *
 *    Description:  百鸡问题
 *
 *        Version:  1.0
 *        Created:  03/08/2014 00:31:18
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo , j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int i,j,k,m,s;
	for(i=0;i<=100;i++)
		for(j=0;j<=100;j++)
			for(k=0;k<=33;k++){
				m=5*i+3*j+k;
				s=i+j+k*3;
				if((m==100)&&(s==100)){
					printf("%d %d %d\n",i,j,k*3);
					break;
				}
			}
	return 0;
}
