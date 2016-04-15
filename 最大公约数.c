#include <stdio.h> 
int main(void)
{
	int m,n,y;
	printf("Enter two integers:");
	scanf("%d %d",&m,&n);
	while (n>0){
	y=m%n;
	m=n;
	n=y;}
	printf("Greatest common divisor:%d\n",m);
	return 0;
}