#include <stdio.h>
int main(){
	int a[3][2]={{1,4},{2,5},{3,6}};
	int i,j;
	printf("Array 1:\n");
	for(i=0;i<3;i++){
		for(j=0;j<2;j++)
			printf("%d ",a[i][j]);
		putchar('\n');
	}
	int b[2][3];
	for(i=0;i<3;i++)
		for(j=0;j<2;j++)
			b[j][i]=a[i][j];
	printf("Array2:\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++)
			printf("%d ",b[i][j]);
		putchar('\n');
	}
	return 0;
}