#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
	float d,x,x1,x2;
	printf("�����뷽��aX^2+bX+c=0��ϵ��\n");
	printf("a=");
	scanf("%d",&a); 
	printf("b=");
	scanf("%d",&b); 
	printf("c=");
	scanf("%d",&c); 
	d=b*b-4*a*c;
	if(d<0)
	printf("\n����%dX^2+%dX+%d=0�޽�\n\n",a,b,c);
	else if(d==0) 
	{
		x=(-b)/(2*a);
		printf("\n����%dX^2+%dX+%d=0�Ľ�ΪX=%.2f\n\n",a,b,c,x);
	} 
	else
	{
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);
		printf("\n����%dX^2+%dX+(%d)=0�Ľ�ΪX1=%.2f��X2=%.2f\n\n",a,b,c,x1,x2);
	}
		
}