/*
 * =====================================================================================
 *
 *       Filename:  lab4-4.c
 *
 *    Description:  给一百分制成绩，要求输出等级'A'（90分以上）,'B'（80-89）,'C'（70-79）,'D'（60-69）,'E'（60分以下）.
 *
 *        Version:  1.0
 *        Created:  03/05/2014 23:01:12
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo, j.kuo2012@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
int main(){
	int score,level;
	char grade;
	printf("Please input the score:");
	scanf("%d",&score);
	while(score>100||score<0){
		printf("Error!Please input again:\a");		//print error info
		scanf("%d",&score);
	}
	level=score/10;
	switch(level){
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:grade='E';break;
		case 6:grade='D';break;
		case 7:grade='C';break;
		case 8:grade='B';break;
		case 9:
		case 10:grade='A';break;
	}
	printf("The grade is %c\n",grade);
	return 0;
}	
