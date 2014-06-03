#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct employee{
	char num[6];
	char name[10];
	char sex[2];
	int age;
	char addr[20];
	int salary;
	char health[8];
	char class[10];
}em[10];
struct emp{
	char name[10];
	int salary;
}em_case[10];
int main(){
	FILE *fp1,*fp2;
	int i,j;
	if((fp1=fopen("employee","r"))==NULL){
		printf("can not open file.\n");
		exit(0);
	}
	printf("\n  NO.   name  sex   age    addr   salary   health  class\n");
	for(i=0;fread(&em[i],sizeof(struct employee),1,fp1)!=0;i++){
		printf("\n%4s%8s%4s%6d%10s%6d%10s%8s",em[i].num,em[i].name,em[i].sex,em[i].age,em[i].addr,em[i].salary,em[i].health,em[i].class);
		strcpy(em_case[i].name,em[i].name);
		em_case[i].salary=em[i].salary;
	}
	printf("\n\n  ********************************      ");
	if((fp2=fopen("emp_salary","wb"))==NULL){
		printf("can not open file\n");
		exit(0);
	}
	for(j=0;j<i;j++){
		if(fwrite(&em_case[j],sizeof(struct emp),1,fp2)!=1)
			printf("error!");
		printf("\n  %12s%10d",em_case[j].name,em_case[j].salary);
	}
	printf("\n   *******************************     ");
	fclose(fp1);
	fclose(fp2);
	return 0;
}
