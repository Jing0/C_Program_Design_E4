/*
 * =====================================================================================
 *
 *       Filename:  lab6-9.c
 *
 *    Description:  有n个考生，每个考生有考号和一个总分成绩，如果录取m人，确定录取分数线，并输出录取考生的考号和成绩。
 *
 *        Version:  1.0
 *        Created:  03/08/2014 23:31:00
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo, j.kuo2012@gmail.com
 * =====================================================================================
 */

 #include <stdio.h>
 int main(){
 	int i,j,m,n,t1,t2;
 	printf("Please input the number of students:");
 	scanf("%d",&n);
 	printf("Please input the number of students you want to enroll:");
 	scanf("%d",&m);
 	int a[n][2];
 	printf("Please input the ID and score of each students:\n");
 	for(i=0;i<n;i++)
 		scanf("%d %d",&a[i][0],&a[i][1]);
 	for(i=0;i<n;i++)
 		for(j=i;j<=n;j++)
 			if(a[i][1]<a[j][1]){
 				t1=a[i][0];
 				t2=a[i][1];
 				a[i][0]=a[j][0];
 				a[i][1]=a[j][1];
 				a[j][0]=t1;
 				a[j][1]=t2;
 			}
 	printf("Admission pass mark is %d\n",a[m-1][1]);
 	printf("ID\tScore\n");
 	for(i=0;i<m;i++)
 		printf("%d\t%d\n",a[i][0],a[i][1]);
 	return 0;
 }