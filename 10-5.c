#include <stdio.h>
#define SIZE 5
struct Student{
	int num;
	char name[10];
	int sub[3];
	float average;
}stud[SIZE];
void save(){
	FILE *fp;
	int i;
	if((fp=fopen("stud","w"))==NULL){
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
int main(){
	int i,j;
	float sum[SIZE]={0};
	for(i=0;i<SIZE;i++){
		printf("Please input ID and name of student NO.%d:",i+1);
		scanf("%d%s",&stud[i].num,stud[i].name);
		for(j=0;j<3;j++){
			printf("Please input the score of subject NO.%d:",j+1);
			scanf("%d",&stud[i].sub[j]);
			sum[i]+=stud[i].sub[j];
		}
		stud[i].average=sum[i]/3.0;
	}
	save();
	return 0;
}
