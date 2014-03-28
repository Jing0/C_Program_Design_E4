#include <stdio.h>
#define M 1
#define N 0
int main(){
	char str[]="M";
	int m=M;
	printf("N\t%d\n",N);
	printf("M%s\n",str);
	printf("M\t%d",m);
	return 0;
}
/* 
 * N       0
 * MM
 * M       1
 *
 */
