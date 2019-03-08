#include <stdio.h> 
int main()
{
	float i,j,a,b,c,n,t,m;
	printf("Enter amount of loan:");
	scanf("%f",&i);
	printf("Enter interest rate:");
	scanf("%f",&j);
	printf("Enter monthly payment:");
	scanf("%f",&a);
	printf("Enter times:");
	scanf("%f",&t);
	b=j/1200;
	c=i;
	for(m=1;m<=t;m++){
	c=c*b+c-a;
	printf("Balance remaining after %3.0f times payment:\t$%.2f\n",m,c);}
	return 0;
	}