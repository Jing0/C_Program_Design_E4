/*
 * =====================================================================================
 *
 *       Filename:  lab5-4.c
 *
 *    Description:  输入30个字符，分别统计其中数字，字母以及字符的个数
 *
 *        Version:  1.0
 *        Created:  03/07/2014 01:13:09
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo, j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	char c;
	int i,num=0,let=0,cha=0;
	for(i=0;i<30;i++){
		c=getchar();
		if(c>='0'&&c<='9')
			num++;
		if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
			let++;
		cha++;
	}
	printf("Number:%d\nLetter:%d\nCharacter:%d\n",num,let,cha);
	return 0;		
}
