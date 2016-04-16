#include <stdio.h>
int main(void)
{
	int i,j,m,d,y; 
 	printf("Enter ISBN:");
	scanf("%d-%d-%d-%d-%d",&i,&j,&m,&d,&y);
	printf("G1:%d\n",i);
	printf("G2:%d\n",j);
	printf("G3:%d\n",m);
	printf("G4:%d\n",d);
	printf("G5:%d\n",y);
    return 0;
}