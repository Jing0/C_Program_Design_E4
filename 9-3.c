#include <stdio.h>
#define SIZE 2
struct Student{
	int num;
	char name[10];
	int score[3];
}stud[SIZE];
void print(struct Student *p){
	int i,j;
	for(i=0;i<SIZE;i++){
		printf("Num:%d\nName:%s\n",stud[i].num,stud[i].name);
		for(j=0;j<SIZE;j++)
			printf("Sub%d:%d\t",i+1,stud[i].score[1]);
		putchar('\n');
	}
}
int main(){
	int i,j;
	struct Student *p;
	p=stud;
	for(i=0;i<SIZE;i++){
		printf("Please input num and name:");
		scanf("%d%s",&stud[i].num,stud[i].name);
		for(j=0;j<3;j++){
			printf("Please input score of Sub%d:",j+1);
			scanf("%d",&stud[i].score[j]);
		}
	}
	print(p);
	return 0;
}
