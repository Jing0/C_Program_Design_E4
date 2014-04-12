#include <stdio.h>
#define N 10
int i;
int main(){
	float score[N];
	float average(float score[]);
	printf("Please input scores of %d students:",N);
	for(i=0;i<N;i++)
		scanf("%f",&score[i]);
	printf("The average of the %d students' score is:%f\n",N,average(score));
	return 0;
}
float average(float score[]){
	float sum=0,average;
	for(i=0;i<N;i++)
		sum+=score[i];
	average=sum/N;
	return(average);
}