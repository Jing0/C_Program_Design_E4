/*
 * =====================================================================================
 *
 *       Filename:  lab11-5.c
 *
 *    Description:  编写程序，将第四题建立的程序复制一份。
 *
 *        Version:  1.0
 *        Created:  03/12/2014 11:57:33
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
void save(){
	FILE *fp;
	int i;
	if((fp=fopen("stu_copy.dat","w"))==NULL){
		printf("cannot open file\n");
		return;
	}
	for(i=0;i<SIZE;i++)
		if(fwrite(&stud[i],sizeof(struct Student),1,fp)!=1)
			printf("file write error\n");
	fclose(fp);
}
int main(){
	load();
	save();
	return 0;
}
