/*
 * =====================================================================================
 *
 *       Filename:  lab8-2.c
 *
2.	用带参数的宏实现求两个数的最大值功能，再利用上述的带参宏设计一个求三个数中最大数的带参宏。在主函数中求下列形式数据中的最大值：
(1)  (a,b)    （2) (a,b,c)		(3) (a-2,b+2)	4) (a-2,b,c+2)
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/09/2014 22:23:51
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo, j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
#define max2(a,b) (a>b?a:b)
#define max3(a,b,c) (max2(a,b)>c?max2(a,b):c)
int main(){
	float a,b,c;
	printf("Please input a,b,c:");
	scanf("%f %f %f",&a,&b,&c);
	printf("max(a,b)=%.2f\n",max2(a,b));
	printf("max(a,b,c)=%.2f\n",max3(a,b,c));
	printf("max(a-2,b+2)=%.2f\n",max2(a-2,b+2));
	printf("max(a-2,b,c+2)=%.2f\n",max3(a-2,b,c+2));
	return 0;
}
