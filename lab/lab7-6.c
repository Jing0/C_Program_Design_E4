/*
 * =====================================================================================
 *
 *       Filename:  lab7-6.c
 *
 *    Description:  计算正整数n1~n2之间所有素数的和
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
 	int n1,n2,i,sum=0;
 	int prime(int n);
 	printf("Please input n1,n2:");
 	scanf("%d %d",&n1,&n2);
 	for(i=n1;i<=n2;i++)
 		if(prime(i))
 			sum+=i;
 	printf("Sum of primes between n1 and n2 is %d\n",sum);
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