#include <stdio.h>
#include <math.h>
int main(){
	double a,b,c,disc,x1,x2,p,q;		//disc是判别式sqrt(b*b-4*a*c)
	scanf("%lf%lf%lf",&a,&b,&c);
	disc=b*b-4*a*c;
	if(disc<0)		//若判别式小于零
		printf("This equation hasn't real roots\n");
	else{		//若判别式大于等于零
		p=-b/(2.0*a);
		q=sqrt(disc)/(2.0*a);
		x1=p+q;		//求出方程的两个根
		x2=p-q;
		printf("real roots:\nx1=%7.2f\nx2=%7.2f\n",x1,x2);		//输出方程的两个根
	}
	return 0;
}