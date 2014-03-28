#include <stdio.h>
#include <string.h>
#define SIZE 5
struct Student{
	int num;
	char name[10];
	int sub[3];
	float average;
}stud[SIZE];
void load(){
	FILE *fp;
	int i;
	if((fp=fopen("stud","r"))==NULL){
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
void sort(){
	int i,j;
	for(i=0;i<SIZE-1;i++)
		for(j=i+1;j<SIZE;j++)
			if(stud[i].average<stud[j].average){
				struct Student temp;
				temp=stud[i];
				stud[i]=stud[j];
				stud[j]=temp;
			}
}
void save(){
	FILE *fp;
	int i;
	if((fp=fopen("stu_sort","w"))==NULL){
		printf("cannot open file\n");
		return;
	}
	for(i=0;i<SIZE;i++)
		if(fwrite(&stud[i],sizeof(struct Student),1,fp)!=1){
			if(feof(fp)){
				fclose(fp);
				return;
			}
			printf("file write error\n");
		}
	fclose(fp);
}
void print(){
	int i;
	for(i=0;i<SIZE;i++)
		printf("%d,%s\n",stud[i].num,stud[i].name);
	printf("\n");
}
int main(){
	load();
	print();
	sort();
	print();
	save();
	printf("The sorted date has been saved!\n");
	return 0;
}
