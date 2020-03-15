#include<stdio.h>
int main (void)
{
	int i;
	float x;
	i=30;
	x=839.21f;
	printf("|%d|%5d|%-5d|%5.3d|\n",40,40,40,40);
	printf("|%10.3f|%10.3e|%-10g|\n",x,x,x);
	return 0;
}