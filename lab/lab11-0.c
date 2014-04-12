/*
 * =====================================================================================
 *
 *       Filename:  lab11-0.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/25/2014 22:45:21
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#define SIZE 3
struct Student{
	int num;
	char name[10];
	int sub[3];
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
	int i,j;
	for(i=0;i<SIZE;i++){
		printf("Please input data of student NO.%d:\n",i+1);
		scanf("%d%s",&stud[i].num,stud[i].name);
		printf("Please input score of each subject:\n");
		for(j=0;j<3;j++)
			scanf("%d",&stud[i].sub[j]);
	}
	save();
	return 0;
}

