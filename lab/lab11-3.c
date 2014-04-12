/*
 * =====================================================================================
 *
 *       Filename:  lab11-3.c
 *
 *    Description:  用定义结构类型的方法，编写程序建立一个具有学生学号、姓名、总分和联系电话的记录文件。
 *
 *        Version:  1.0
 *        Created:  03/12/2014 11:55:08
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo, j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
#define SIZE 4
struct Student{
	int num;
	char name[10];
	int score;
	long phone;
}stud[SIZE];
void save(){
	FILE *fp;
	int i;
	if((fp=fopen("stu.dat","w"))==NULL){
		printf("cannot open file\n");
		return;
	}
	for(i=0;i<SIZE;i++)
		if(fwrite(&stud[i],sizeof(struct Student),1,fp)!=1)
			printf("file write error\n");
	fclose(fp);
}
int main(){
	int i;
	for(i=0;i<SIZE;i++){
		printf("Please input data of student NO.%d(ID,score,phone,name):\n",i+1);
		scanf("%d%d%ld%s",&stud[i].num,&stud[i].score,&stud[i].phone,stud[i].name);
	}
	save();
	return 0;
}
