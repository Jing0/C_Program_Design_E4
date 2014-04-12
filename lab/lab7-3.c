/*
 * =====================================================================================
 *
 *       Filename:  lab7-3.c
 *
 *    Description:  编写一个用梯形法求一元函数f(x)在(a,b)上积分近似值的函数过程，
 *	并就f(x)=sin(2x)+x，当[a,b]=[0,3.14159]、小区间数n＝10和n＝20时，分别计算并输出积分的近似值s1和s2，保留三位小数
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
 #include <math.h> 
 int main(){
	float s1,s2;
	float integral(float,float,int);
	s1=integral(0.0,3.14159,10);
	s2=integral(0.0,3.14159,20);
	printf("\n n=10 s1=%.3f\n",s1);
	printf("\n n=20 s2=%.3f\n",s2);
 }
 float f(float x){
 	return sin(x+x)+x;
 }
 float integral(float a,float b,int n){
 	float w, sum=0.0;
 	int k;
 	w=(b-a)/n;
 	for(k=1;k<=n;k++)
 		sum+=(f(a+(k-1)*w)+f(a+k*w))/2.0*w;
 	return sum;
 }
 