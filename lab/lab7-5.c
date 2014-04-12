/*
 * =====================================================================================
 *
 *       Filename:  lab7-5.c
 *
 *    Description:  用牛顿迭代法求一元方程在0附近的近似值
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
	float solut(float a,float b,float c,float d,float e,float f);
	printf("x=%f\n",solut(1,0,2,-1,1,1));
	return 0;
}
float solut(float a,float b,float c,float d,float e,float f){
	float x=1,x0,f1,f2;
	do{
		x0=x;
		f1=((((a*x0+b)*x0+c)*x0+d)*x0+e)*x0+f;
		f2=(((5*a*x0+4*b)*x0+3*c)*x0+2*d)*x0+e;
		x=x0-f1/f2;
	}while(fabs(x-x0)>=1e-3);
	return(x);
}