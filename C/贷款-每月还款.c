#include <stdio.h> 
int main()
{
	float i,j,a,b,c,d,e;
	printf("Enter amount of loan:");
	scanf("%f",&i);
	printf("Enter interest rate:");
	scanf("%f",&j);
	printf("Enter monthly payment:");
	scanf("%f",&a);
	b=j/1200;
	c=i*b+i-a;
	d=c*b+c-a;
	e=d*b+d-a;
	printf("\nBalance remaining after first payment:$%.2f\n",c);
	printf("Balance remaining after second payment:$%.2f\n",d);
	printf("Balance remaining after third payment:$%.2f\n",e);
	return 0;
	}