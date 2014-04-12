/*
 * =====================================================================================
 *
 *       Filename:  lab9-11.c
 *
 *    Description:  设有3个学生，4门功课，编写2个函数分别实现如下功能：(1)求每个学生的平均分；(2)找出一门以上课程不及格的学生。
 *
 *        Version:  1.0
 *        Created:  03/11/2014 12:55:50
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo, j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	float a[3][4];
	int i,j;
	float average(float *p);
	void seek(float (*p)[4]);
	for(i=0;i<3;i++){
		printf("Please input the scores of student NO.%d:\n",i+1);
		for(j=0;j<4;j++)
			scanf("%f",&a[i][j]);
	}
	for(i=0;i<3;i++)
		printf("The average score of student NO.%d is %.3f\n",i+1,average(a[i]));
	seek(a);
	return 0;
}
float average(float *p){
	float sum=0;
	int i;
	for(i=0;i<4;i++)
		sum+=*(p+i);
	return (sum/4);
}
void seek(float (*p)[4]){
	int i,j;
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			if(*(*(p+i)+j)<60)
				printf("Student NO.%d failed with score %.2f\n",i+1,*(*(p+i)+j));
}

