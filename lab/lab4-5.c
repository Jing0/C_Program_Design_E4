/*
 * =====================================================================================
 *
 *       Filename:  lab4-5.c
 *
 *    Description:  企业发放的奖金根据利润提成
 *
 *        Version:  1.0
 *        Created:  03/05/2014 23:07:29
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo, j.kuo2012@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
int main(){
	int i;
	double bonus,bon1,bon2,bon4,bon6,bon10;
	bon1=100000*0.1;
	bon2=bon1+100000*0.075;
	bon4=bon2+100000*0.05;
	bon6=bon4+100000*0.03;
	bon10=bon6+400000*0.015;
	printf("Please input the profit I:");
	scanf("%d",&i);
	if(i<=100000)
		bonus=i*0.1;
	else if(i<=200000)
		bonus=bon1+(i-100000)*0.075;
	else if(i<=400000)
		bonus=bon2+(i-200000)*0.05;
	else if(i<=600000)
		bonus=bon4+(i-400000)*0.03;
	else if(i<=1000000)
		bonus=bon6+(i-600000)*0.015;
	else
		bonus=bon10+(i-1000000)*0.01;
	printf("The bonus is : %10.2f\n",bonus);
	return 0;
}
