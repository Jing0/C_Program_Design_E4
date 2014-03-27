#include <stdio.h>
#define SIZE 10
struct Student{
	int num;
	char name[];
	int score[3];
}stud[SIZE];
int main(){
	int i,j,t,sum[SIZE]={0};
	for(i=0;i<SZIE;i++){
		printf("Please input ID and name of student %d:\n",i+1);
		scanf("%s%d",&stud[i].num,stud[i].name);
		for(j=0;j<3;j++){
			printf("Please input the score of subject%d:",j+1);
			scanf("%d",&stud[i].score[j]);
			sum[i]+=stud[i].score[j];
		}
	}
}
