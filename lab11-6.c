/*
 * =====================================================================================
 *
 *       Filename:  lab11-6.c
 *
 *    Description:  用产生随机数的方法产生：100个商场的序号（1到500之间）、每个商场一年四个季度每个季度的销售金额（单位万元），将这些数据存于数据文件，然后利用该文件求出每个商场一年的销售总金额。
 *
 *        Version:  1.0
 *        Created:  03/12/2014 11:58:11
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo, j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define random (rand()%500)
#define NUM 100
struct Market{
	int num;
	int sale[4];
}mar[NUM];
int main(){
	FILE *fp;
	if((fp=fopen("market.dat","w"))==NULL){
		printf("cannot open file\n");
		exit(0);
	}
	int i,j,sum[NUM]={0};
	for(i=0;i<NUM;i++){
		mar[i].num=random;
		printf("Please input the sales data of market NO.%d:\n",i+1);
		for(j=0;j<4;j++){
			scanf("%d",&mar[i].sale[j]);
			sum[i]+=mar[i].sale[j];
		}
	}
	for(i=0;i<NUM;i++){
		if(fwrite(&mar[i],sizeof(struct Market),1,fp)!=1)
			printf("file write error\n");
		printf("The year's sales of market NO.%d is %d\n",i+1,sum[i]);
	}
	fclose(fp);
	system("pause");
	return 0;
}
