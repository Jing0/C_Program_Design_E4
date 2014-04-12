/*
 * =====================================================================================
 *
 *       Filename:  lab7-4.c
 *
 *    Description:  编写一个函数程序，其功能是判定一个数是否为素数，
 *	若是素数则返回值为1，若不是素数则函数返回之为0.用次函数判定找出100以内最大的5个素数
 *
 *        Version:  1.0
 *        Created:  03/08/2014 23:30:00
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo, j.kuo2012@gmail.com
 * =====================================================================================
 */
 #include <stdio.h>
 int main(){
 	int i,n;
 	int prime(int n);
 	for(i=100,n=0;n<3;i--)
 		if(prime(i)){
 			printf("%d ",i);
 			n++;
 		}
 	printf("\n");
 	return 0;
 }
 int prime(int n){
 	int i,sign=1;
 	if(n<2)
 		sign=0;
 	else if(n!=2)
 		for(i=2;i<n;i++)
 			if(n%i==0)
 				sign=0;
 	return sign;
 }