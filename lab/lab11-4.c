/*
 * =====================================================================================
 *
 *       Filename:  lab11-4.c
 *
 *    Description:  编写程序，利用第3题建立的记录文件，从键盘上输入一个学号，可以查寻到此人其他信息。
 *
 *        Version:  1.0
 *        Created:  03/12/2014 11:57:04
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo, j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
#define SIZE 3
struct Student{
	int num;
	char name[10];
	int score;
	long phone;
}stud[SIZE];
void load(){
	FILE *fp;
	int i;
	if((fp=fopen("stu.dat","r"))==NULL){
		printf("cannot open file\n");
		return;
	}
	for(i=0;i<SIZE;i++)
		if(fread(&stud[i],sizeof(struct Student),1,fp)!=1){
			if(feof(fp)){
				fclose(fp);
				return;
			}
			printf("file read error\n");
		}
	fclose(fp);
}
int main(){
	load();
	int i,n;
	printf("Please input the ID:");
	scanf("%d",&n);
	for(i=0;i<SIZE;i++)
		if(n==stud[i].num){
			printf("Name:%s\nScore:%d\nPhone:%ld\n",stud[i].name,stud[i].score,stud[i].phone);
			break;
		}
	return 0;
}
