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
	printf("��������S=%.0lf��\n",s);
	printf("�������V=%.0lf������\n",v);
} 