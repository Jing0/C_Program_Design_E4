/*
 * =====================================================================================
 *
 *       Filename:  lab7-2.c
 *
 *    Description:  斐波那契数列的前两项是0、1，以后的每一项都是其相邻前两项之和。编写函数过程求: 
 *     ⑴ 数列前n项和FS；⑵ 前n项的平均值V。并就n=20计算并输出FS与V。
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
 	int i,n,sum=0;
 	int fib(int);
 	float average(int sum,int n);
 	printf("Please input n:");
 	scanf("%d",&n);
 	for(i=1;i<=n;i++){
 		printf("%d ",fib(i));
 		sum+=fib(i);
 	}
 	printf("\nFS=%d\nV=%f\n",sum,average(sum,n));
 	return 0;
 }
 int fib(int i){
 	int c=1;
 	if(i>2)
 		return (fib(i-1)+fib(i-2));
 	else
 		return c;
 }
 float average(int sum,int n){
 	return((float)sum/(float)n);
 }