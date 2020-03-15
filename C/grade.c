#include <stdio.h>
int main()
{
	int a,x;
	printf("«Î ‰»Î∑÷ ˝=");
	scanf("%d",&a);
	x=a/10;
	switch (x){
		case 10:printf("\nExcellent\n\n");
				break;
		case 9:	printf("\nA\n\n");
				break;
		case 8:	printf("\nB\n\n");
				break;
		case 7:	printf("\nC\n\n");
				break;
		case 6:	printf("\nD\n\n");
				break;
		default:printf("\nE\n\n");
				break;

	}
	return 0 ;
}