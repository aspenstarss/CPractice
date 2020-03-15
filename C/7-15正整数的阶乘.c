#include <stdio.h>
int main()
{
	int s=1,i,n;
	printf("Enter a positive number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		s=s*i;
	}
	printf("Factorial:%d\n",s);
	return 0;
}