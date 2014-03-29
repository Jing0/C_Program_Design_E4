/*
 * =====================================================================================
 *
 *       Filename:  lab10-4.c
 *
 *    Description:  设有若干个人员的数据，其中有学生和教师。学生的数据中包括：姓名、学号、性别、职业、班级。教师的数据包括：姓名、编码、性别、职业、职务。要求输入人员的数据，然后再输出。
 *
 *        Version:  1.0
 *        Created:  03/12/2014 11:52:45
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo, j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
#define M 2
union catagory{
	char work[10];
	int class;
};
struct Person{
	char name[20];
	int num;
	char sex;
	char job;
	union catagory cata;
}person[M];
int main(){
	int i;
	for(i=0;i<M;i++){
		printf("Please input the info of person number %d:\n",i+1);
		printf("name:");
		scanf("%s",person[i].name);
		printf("num and sex:");
		scanf("%d %c",&person[i].num,&person[i].sex);
		getchar();
		printf("job('s'for student,'t'for teacher):");
		scanf("%c",&person[i].job);
		if(person[i].job=='s'){
			printf("class:");
			scanf("%d",&person[i].cata.class);
		}
		else if(person[i].job=='t'){
			printf("work:");
			scanf("%s",person[i].cata.work);
		}
		else
			printf("input error\n");
	}
	printf("\n");
	printf("name  num  sex job  class/work \n");
	for(i=0;i<M;i++){
		printf("%-6s %d %c   %c    ",person[i].name,person[i].num,person[i].sex,person[i].job);
		if(person[i].job=='s')
			printf("%d\n",person[i].cata.class);
		else
			printf("%s\n",person[i].cata.work);
	}
	return 0;
}
