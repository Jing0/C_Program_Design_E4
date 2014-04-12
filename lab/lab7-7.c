/*
 * =====================================================================================
 *
 *       Filename:  lab7-7.c
 *
 *    Description:  用递归方法求 Fibonacci数列前 20 项及其这20项的和。
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
 	int i,sum=0;
 	int fib(int);
 	for(i=1;i<=20;i++){
 		printf("%d ",fib(i));
 		sum+=fib(i);
 	}
 	printf("\nSum=%d\n",sum);
 	return 0;
 }
 int fib(int i){
 	int c=1;
 	if(i>2)
 		return (fib(i-1)+fib(i-2));
 	else
 		return c;
 }