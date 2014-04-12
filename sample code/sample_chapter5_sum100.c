#include <stdio.h>
int main(){
	int i=1,sum=0;
	/*do{
		sum+=i;
		i++;
	}while(i<=100);*/
	/*while(i<=100){
		sum+=i;
		i++;
	}*/
	for(i=1;i<=100;i++)
		sum+=i;
	printf("sum=%d\n",sum);
	return 0;
}