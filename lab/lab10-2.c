/*
 * =====================================================================================
 *
 *       Filename:  lab10-2.c
 *
 *    Description:  设有学生信息如下：学号（长整型）、姓名（字符串型）、出生年月（其中含有年份、月份、日，均为整型）。试编写程序，输入5个学生的上述信息，输出所有学生的学号、姓名和年龄。
 *
 *        Version:  1.0
 *        Created:  03/12/2014 11:51:39
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo , j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
#include <time.h>
#define N 1
struct Date{
	int year;
	int month;
	int day;
};
struct Student{
	long num;
	char name[20];
	struct Date birthday;
};
int main(){
	struct Student stu[N];
	int i,year;
	time_t rawtime;
	time(&rawtime);
	struct tm *info;
	info=localtime(&rawtime);
	year=info->tm_year+1900;
	for(i=0;i<N;i++){
		printf("Please input the number:");
		scanf("%ld",&stu[i].num);
		printf("Please input name:");
		scanf("%s",stu[i].name);
		printf("Please input birthday(year month day):");
		scanf("%d %d %d",&stu[i].birthday.year,&stu[i].birthday.month,&stu[i].birthday.day);
	}
	printf("number name   age\n");
	for(i=0;i<N;i++)
		printf("%-6ld %-6s %d\n",stu[i].num,stu[i].name,year-stu[i].birthday.year);
	return 0;
}
