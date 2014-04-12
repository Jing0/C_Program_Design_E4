/*
 * =====================================================================================
 *
 *       Filename:  lab7-1.c
 *
 *    Description:  factorial
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
 	int n,N,M;
 	float result;
 	int factorial(int n);
 	printf("Please input n,N,M:");
 	scanf("%d %d %d",&n,&N,&M);
 	result=factorial(n)/(factorial(M)*factorial(N-M));
 	printf("Result=%f\n",result);
 	return 0;
 }
 int factorial(int n){
	int f=1;
	if(n!=1&&n!=0)
		f=factorial(n-1)*n;
	return f;
}