#include <stdio.h>
#include<math.h>
int main()
{
	double a,x,y=1,y1=1;
	for(;;){
	printf("Enter a positive number: ");
	scanf("%lf",&x);
	y=1;
	while(y>=0.00001){
		y=y1;
		a=x/y;
		y1=(y+a) / 2;
		y=fabs(y-y1);
	}
	printf("Square root:%.5lf\n",y1);}
	return 0;
}
