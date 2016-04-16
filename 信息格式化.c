#include <stdio.h>
int main(void)
{
	int i,m,d,y; 
	float j;
 	printf("Enter item number:");
	scanf("%d",&i);
	printf("Enter unit price:");
	scanf("%f",&j);
	printf("Enter purchase date (mm/dd/yyyy):");
	scanf("%d/%d/%d",&m,&d,&y);
	printf("Item\tUnite\tPurchase\n\tPrice\tDate\n");
    printf("%d\t$%.1f\t%d/%d/%d\n",i,j,m,d,y);
    return 0;
}

