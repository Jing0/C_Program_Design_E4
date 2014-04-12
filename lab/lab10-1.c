/*
 * =====================================================================================
 *
 *       Filename:  lab10-1.c
 *
 *    Description:  设有学生信息如下：学号（长整型）、姓名（字符串型）、年龄（整型）、课程1成绩（实型）、课程2成绩（实型）、课程3成绩（实型）、课程4成绩（实型）、课程5成绩（实型）、课程6成绩（实型）、课程7成绩（实型）、总分（实型）、平均分（实型）。试编写程序，输入3个学生的上述信息，计算每个学生的总分、平均分，然后输出每个学生学号、姓名、总分、平均分。
 *
 *        Version:  1.0
 *        Created:  03/12/2014 11:50:29
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo, j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
struct Student{
	long int num;
	char name[20];
	int age;
	float sub1;
	float sub2;
	float sub3;
	float sub4;
	float sub5;
	float sub6;
	float sub7;
	float sum;
	float average;
};
int main(){
	struct Student stu[3];
	int i;
	for(i=0;i<3;i++){
		printf("Please input the number:");
		scanf("%ld",&stu[i].num);
		printf("Please input name:");
		scanf("%s",stu[i].name);
		printf("Please input age:");
		scanf("%d",&stu[i].age);
		printf("Please input subject1:");
		scanf("%f",&stu[i].sub1);
		printf("Please input subject2:");
		scanf("%f",&stu[i].sub2);
		printf("Please input subject3:");
		scanf("%f",&stu[i].sub3);
		printf("Please input subject4:");
		scanf("%f",&stu[i].sub4);
		printf("Please input subject5:");
		scanf("%f",&stu[i].sub5);
		printf("Please input subject6:");
		scanf("%f",&stu[i].sub6);
		printf("Please input subject7:");
		scanf("%f",&stu[i].sub7);
		stu[i].sum=stu[i].sub1+stu[i].sub2+stu[i].sub3+stu[i].sub4+stu[i].sub5+stu[i].sub6+stu[i].sub7;
		stu[i].average=stu[i].sum/7.0;
	}
	for(i=0;i<3;i++)
		printf("%ld,%s,%d,%.1f,%.1f,%.1f,%.1f,%.1f,%.1f,%.1f,%.1f,%.1f",stu[i].num,stu[i].name,stu[i].age,stu[i].sub1,stu[i].sub2,stu[i].sub3,stu[i].sub4,stu[i].sub5,stu[i].sub6,stu[i].sub7,stu[i].sum,stu[i].average);
	return 0;
}
