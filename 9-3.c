#include <stdio.h>
#define SIZE 5
struct Student{
	int num;
	char name[10];
	int score[3];
}stud[SIZE];
int main(){
	int i,j;
	struct Student *p;
	void print(struct Student *p);
	for(i=0;i<SIZE;i++){
		printf("Please input num and name:");
		scanf("%d%s",&stud[i].num,stud[i].name);
		for(j=0;j<3;j++){
			printf("Please input score of Sub%d:",j+1);
			scanf("%d",&stud[i].score[j]);
		}
	}
	p=stud;
	print(p);
	return 0;
}
void print(struct Student *p){
	int i,j;
	for(i=0;i<SIZE;i++){
		printf("Num:%d\nName:%s\n",stud[i].num,stud[i].name);
		for(j=0;j<SIZE;j++)
			printf("Sub%d:%d\t",i+1,stud[i].score[1]);
		putchar('\n');
	}
}
