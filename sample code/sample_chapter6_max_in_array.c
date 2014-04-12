#include <stdio.h>
int main(){
	int a[3][4]={{1,2,3,4},{9,7,8,6},{5,6,3,4}};
	int i,j,max=0,column=0,row=0;
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			if(a[i][j]>max){
				max=a[i][j];
				row=i;
				column=j;
			}
	printf("The largest number in the array is %d in column %d,row %d.\n",max,column,row);
	return 0;
}