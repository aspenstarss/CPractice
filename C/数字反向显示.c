#include <stdio.h> 
int main(void)
{
	int m,n,x,y,a,b,c,d;
	printf("Enter a digit number:");
	scanf("%d",&m);
	printf("The reversal is:");
	do{
		n=m%10;
		m=m/10;
		printf("%d",n);
	}while(m!=0);
	
	return 0;
}