#include <stdio.h>
int main(void)
{
	int i1,i2,i3,i4;
	int j1,j2,j3,j4;
	int m1,m2,m3,m4;
	int n1,n2,n3,n4;
	int Row_sums,Column_sums,Diagonal_sums;
 	printf("Enter the number from 1 to 16 in day order:\n");
	scanf("%d%d%d%d",&i1,&i2,&i3,&i4);
	scanf("%d%d%d%d",&j1,&j2,&j3,&j4);
	scanf("%d%d%d%d",&m1,&m2,&m3,&m4);
	scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
	printf("%d\t%d\t%d\t%d\t\n%d\t%d\t%d\t%d\t\n%d\t%d\t%d\t%d\t\n%d\t%d\t%d\t%d\t\n",i1,i2,i3,i4,j1,j2,j3,j4,m1,m2,m3,m4,n1,n2,n3,n4);
    return 0;
}