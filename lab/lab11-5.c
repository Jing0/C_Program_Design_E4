/*
 * =====================================================================================
 *
 *       Filename:  lab11-5.c
 *
 *    Description:  编写程序，将第四题建立的程序复制一份。
 *
 *        Version:  1.0
 *        Created:  03/12/2014 11:57:33
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo, j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *in,*out;
	char ch;
	if((in=fopen("11-4.c","r"))==NULL){
		printf("cannot open file\n");
		exit(0);
	}
	if((out=fopen("11-4_copy.c","w"))==NULL){
		printf("cannot open file\n");
		exit(0);
	}
	while(!feof(in)){
		ch=fgetc(in);
		fputc(ch,out);
		putchar(ch);
	}
	putchar(10);
	fclose(in);
	fclose(out);
	system("pause");
	return 0;
}
