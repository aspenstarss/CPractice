#include <stdio.h> 
int main(void)
{
	int m,n,i,j=1,x;
	printf("Enter number of days in month:");
	scanf("%d",&m);
	printf("Enter starting day of the week:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	printf("\t");
	do{
		printf("%-d\t",j);
		x=n+j;		
		j++;
		if(x==8)
		{printf("\n");
			}
		if(x==15)
		{printf("\n");
		}	
		if(x==22)
		{printf("\n");
		}	
		if(x==29)
		{printf("\n");
		;	}
		if(x==36)
		{printf("\n");
			}
	}while(j<=m);
	printf("\n");
	return 0;
}