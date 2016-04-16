#include <stdio.h>

int main()
{
	int i;
	double s=1,v=0,a=2;
	for(i=2;i<=64;i++)
	{
		a=a*2;
		s=s+a;
		v=s/1.42e8;
	}
	printf("麦子粒数S=%.0lf粒\n",s);
	printf("麦子体积V=%.0lf立方米\n",v);
} 