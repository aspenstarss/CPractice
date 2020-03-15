#include <stdio.h> 
void pay_amount(int dollars,int *twenties,int *tens,int *fives,int *ones);
int main()
{
	int dollars;
	int twenties,tens,fives,ones;
	printf("Enter a dollar amount:");
	scanf("%d",&dollars);
	pay_amount(dollars,&twenties,&tens,&fives,&ones);
	printf("\n$20 bills:%d\n$10 bills:%d\n$5 bills:%d\n$1 bills:%d\n",twenties,tens,fives,ones);
	return 0;
}

void pay_amount(int dollars,int *twenties,int *tens,int *fives,int *ones)
{
	int a;
	*twenties=dollars/20;
	a=dollars-*twenties*20;
	*tens=a/10;
	a=dollars-*twenties*20-*tens*10;
	*fives=a/5;
	*ones=dollars-*twenties*20-*tens*10-*fives*5;
}
	