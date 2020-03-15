#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
	float d,x,x1,x2;
	printf("请输入方程aX^2+bX+c=0的系数\n");
	printf("a=");
	scanf("%d",&a); 
	printf("b=");
	scanf("%d",&b); 
	printf("c=");
	scanf("%d",&c); 
	d=b*b-4*a*c;
	if(d<0)
	printf("\n方程%dX^2+%dX+%d=0无解\n\n",a,b,c);
	else if(d==0) 
	{
		x=(-b)/(2*a);
		printf("\n方程%dX^2+%dX+%d=0的解为X=%.2f\n\n",a,b,c,x);
	} 
	else
	{
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);
		printf("\n方程%dX^2+%dX+(%d)=0的解为X1=%.2f和X2=%.2f\n\n",a,b,c,x1,x2);
	}
		
}