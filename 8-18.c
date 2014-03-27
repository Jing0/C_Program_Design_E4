#include <stdio.h>
int main(){
	int n;
	char mon[13][9]={"January","February","March","April","May","June","July","August","September","October","November","December"},(*p)[9]=mon;
	printf("Please input a number(1~12):");
	scanf("%d",&n);
	printf("The month in English is %s",*(p+n-1));
	return 0;
}
