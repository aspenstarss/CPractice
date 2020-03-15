#include <stdio.h>
#define N ((int) (sizeof(a)/sizeof(a[0])))
int main()
{
	int N=10;
	int a[N],i,b;
	
	printf("Enter %d number: ",N);
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	
	printf("In reverse order:");
	for(i=N-1;i>=0;i--)
		printf(" %d",a[i]);
	printf("\n");
	
	printf("%d",b);
	return 0;
}
