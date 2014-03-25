/*
 * =====================================================================================
 *
 *       Filename:  lab11-2.c
 *
 *    Description:  编写程序将第1题建立的数据文件读入且求出每个学生的平均成绩。
 *
 *        Version:  1.0
 *        Created:  03/12/2014 11:54:38
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
	int sub[3];
}stud[SIZE];
void load(){
	FILE *fp;
	int i;
	if((fp=fopen("lab11-1.dat","r"))==NULL){
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
	int i,j;
	float sum[3]={0};
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			sum[i]+=stud[i].sub[j];
		printf("The average score of Student NO.%d is %f\n",i+1,sum[i]/3.0);
	}
	return 0;
}
