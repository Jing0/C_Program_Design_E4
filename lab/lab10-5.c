/*
 * =====================================================================================
 *
 *       Filename:  lab10-5.c
 *
 *    Description:  已知3个学生的学号、姓名、性别及年龄，要求通过直接赋值的方式将数据送给某结构体变量，然后再输出。
 *
 *        Version:  1.0
 *        Created:  03/12/2014 11:53:10
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo, j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
struct Student{
	int num;
	char name[20];
	char sex;
	int age;
};
struct Student stu[3]={{10001,"Tom",'M',18},{10002,"Marry",'F',19},{10003,"Jackie",'M',19}};
int main(){
	struct Student *p;
	printf("No.   Name       Sex Age\n");
	for(p=stu;p<stu+3;p++)
		printf("%5d %-10s %2c %4d\n",p->num,p->name,p->sex,p->age);
	return 0;
}
