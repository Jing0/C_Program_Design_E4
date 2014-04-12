#include <stdio.h>
int main(){
	void hanoi(int n,char one,char two,char three);
	int m;
	printf("input the numbers of diskes:");
	scanf("%d",&m);
	printf("The step to move %d diskes:\n",m);
	hanoi(m,'A','B','C');
	return 0;
}
//将n个盘从one座借助two座，移到three座
void hanoi(int n,char one,char two,char three){
	void move(char x,char y);
	if(n==1)
		move(one,three);
	else{
		hanoi(n-1,one,three,two);
		move(one,three);
		hanoi(n-1,two,one,three);
	}
}
//定义move函数
void move(char x,char y){
	printf("%c-->%c\n",x,y);
}